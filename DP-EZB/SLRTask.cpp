#include "MatrixNewTaskDialog.h"
#include <iostream>
#include <string>

namespace DP_EZB {

	class SLRTask {


	public: int pocetRovnic;
	public: int pocetZloziek;
	public:	double** matrix;
	public: int zeros;


	public: SLRTask(int pocetV, int pocetS, double** m, int z) {
		this->pocetRovnic = pocetV;
		this->pocetZloziek = pocetS;
		this->matrix = m;
		this->zeros = z;
	}

	public: String^ getResult(double** m, int check, int* pocetZaclenenychVektorov, int* pocetBazickychVektorov, String^ field, int rowCount) {
		// zaclenene vektory + ich zlozky
		int pocetZaclenenych = 0;
		String^ all = "{ ";
		String^ zaclenene = "";
		String^ nezaclenene = "";
		String^ vektorB = "";
		String^ output = "";

		for (int i = 1; i <= pocetZloziek; i++) {
			all += "x" + i;
			if (i < pocetZloziek)
				all += ", ";
			if (pocetZaclenenychVektorov[i - 1] == 1) {
				pocetZaclenenych++;
				zaclenene += "x" + i;
				if (i < pocetZloziek) {
					zaclenene += ", ";
				}
			}
			else {
				nezaclenene += "x" + i;
				if (i < pocetZloziek) {
					nezaclenene += ", ";
				}
			}
		}
		all += " }";

		//h(a1-an)

		output += "Koniec vypoctu!\r\n\r\nh(A) = h" + all + " = " + pocetZaclenenych + ".\r\n\r\n";

		String^ heplField = field;
		Boolean sign = false;
		for (int i = 0; i < pocetRovnic; i++) {
			if (m[i][pocetZloziek - 1] < 0) {
				String^ help = "";
				help += heplField->Substring(0, heplField->IndexOf("/"));
				vektorB += round_up(m[i][pocetZloziek - 1], 2).ToString() + " * " + help->Substring(0, 2);
				if (!sign) sign = true;
			}
			else {
				if (m[i][pocetZloziek - 1] > 0) {
					String^ help = "";
					help += heplField->Substring(0, heplField->IndexOf("/"));
					if (sign) vektorB += " + ";
					vektorB += round_up(m[i][pocetZloziek - 1], 2).ToString() + " * " + help->Substring(0, 2);
					if (!sign) sign = true;
				}
			}
			heplField = heplField->Remove(0, heplField->IndexOf("/") + 1);
		}
		int vectorBrank = 0;

		for (int i = 0; i < pocetRovnic; i++) { //nulovy riadok
			int count = 0;
			for (int j = 1; j <= pocetZloziek; j++)
				if (m[i][j - 1] != 0) count++;
			if (count == 0 && m[i][pocetZloziek] != 0) {
				//nie je linearnou kombinaciou vektorov bazy
				vectorBrank++;
			}
		}		

		if (vectorBrank > 0) {
			output += "h(A|b) = " + (vectorBrank + pocetZaclenenych) + "\r\n";
			output += "h(A) != h(A|b) Preto system linearnych rovnic nema riesenie.";
		}
		else {
			if (pocetZaclenenych == pocetZloziek) {
				output += "h(A|b) = " + pocetZaclenenych + "\r\n";
				output += "h(A) = h(A|b) Preto ma system linearnych rovnic jedno riesenie:\r\n\r\n";

				int count = 0;
				String^ M = "M = {(";
				for (int j = 0; j < pocetZloziek; j++) {
					for (int i = 0; i < pocetRovnic; i++) {
						if (m[i][j] == 1) {
							output += "x" + (j + 1) + " = " + m[i][pocetZloziek]+"\r\n";
							M += m[i][pocetZloziek] + ", ";
						}
					}
				}
				M = M->Remove(M->Length - 2, 1);
				M += ")}";
				output += M;

			}
				
			else {
				if (pocetZaclenenych < pocetZloziek) {
					output += "h(A|b) = " + pocetZaclenenych + "\r\n";
					output += pocetZaclenenych + " = h(A) < n = " + pocetZloziek + "\r\nSystem linearnych rovnic ma nekonecne vela rieseni zavislych od n-h(A) = "+
						pocetZloziek + " - " + pocetZaclenenych + " = " + (pocetZloziek-pocetZaclenenych)+ " teda od nezaclenenych premennych " + nezaclenene + ".\r\n\r\n";

					int count = 0;
					int lastJ = 10;
					String^ M = "Mnozina vsetkych rieseni v parametrickom tvare:\r\n M = {(";
					for (int j = 0; j < pocetZloziek + zeros; j++) {
						for (int i = 0; i < pocetRovnic; i++) {
							if (m[i][j] == 1 && field->Contains("x"+(j+1))) {
								Boolean sign = false;
								for (int k = 0; k < pocetZloziek + zeros; k++) {
									if (j != k) {
										double help = m[i][k];
										if(k<pocetZloziek)
											help *= (-1);
										if (k < pocetZloziek + zeros)
											if (help > 0) {
												if (sign) {
													M += " + ";
												}
												if (help != 1 || k == pocetZloziek) {
													M += help;
												}
												if (k < pocetZloziek) {
													M += "x" + (k + 1);
												}
												sign = true;
											}

											else if (help < 0) {
												M += " ";
												if (help != -1 || k == pocetZloziek) {
													M += help;
												}
												else {
													M += "-";
												}
												if (k < pocetZloziek) {
													M += "x" + (k + 1);
												}
												sign = true;
											}
									}
										
								}
								M += ", ";
							}
							else {
								if (!field->Contains("x" + (j + 1)) && j<pocetZloziek && lastJ != j) {
									M += "x" + (j + 1) + ", ";
									lastJ = j;
								}
							}
						}
						lastJ = j;
					}
					M = M->Remove(M->Length - 2,1);
					M += ") " + nezaclenene + " e R}";
					output += M;
				}
			}

		}

		// tu vraciam text !!
		return output;



	}

	double round_up(double value, int decimal_places) {
		const double multiplier = std::pow(10.0, decimal_places);
		return std::ceil(value * multiplier) / multiplier;
	}

	};
}