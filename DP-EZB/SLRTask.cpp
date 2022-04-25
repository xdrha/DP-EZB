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

		if (check == 0) {
			if (pocetZaclenenych == pocetZloziek) {
				output = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit vsetky stlpcove vektory: " + zaclenene + ".\r\n\r\n";
			}
			else {
				if (pocetZaclenenych > 0) {
					output = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit najviac " + pocetZaclenenych + " stlpcove vektory: " + zaclenene + "\r\n\r\n";
				}
			}
		}
		else {
			if (pocetZaclenenych == pocetZloziek) {
				output = "Koniec vypoctu!\r\n\r\nZo systemu stlpcovych vektorov sme do bazy zaclenili vsetky vektory " + zaclenene + " a tieto su linearne nezavisle, preto system vektorov { " +
					zaclenene + " } tvori jednu z moznych baz.\r\n\r\n";
			}
			else {
				output = "Koniec vypoctu!\r\n\r\nZo systemu stlpcovych vektorov  " + all + " sme do bazy zaclenili vektory " + zaclenene + " a tieto su linearne nezavisle, preto system vektorov { " +
					zaclenene + " } tvori jednu z moznych baz.\r\n\r\n";
			}
		}

		//h(a1-an)

		output += "Maximalny pocet stlpcovych vektorov " + all + ", ktore mozeme zaclenit do bazy je " + pocetZaclenenych + ".\r\nPreto: h(A) = h" +
			all + " = " + pocetZaclenenych + ".\r\n\r\n";

		//ci je vektor b linearnou kombinaciou

		if (zeros == 1) {

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
					//nie je linearnou kombinaciou vektorov bazy + vypis bazu pretoze zlozka bindex != 0
					vectorBrank++;
				}
			}

			

			if (vectorBrank > 0) {
				output += "h(A|b) = " + (vectorBrank + pocetZaclenenych) + "\r\n";
				output += "Vektor b nie je linearnou kombinaciou systemu vektorov bazy a system linearnych rovnic nema riesenie.";
			}
			else {
				if (pocetZaclenenych == pocetZloziek) {
					output += "h(A|b) = " + (vectorBrank + pocetZaclenenych) + "\r\n";
					output += "Pretoze vektor b je linearnou kombinaciou bazickych vektorov a system linearnych rovnic ma jedno riesenie:\r\n\r\n";

					int count = 0;
					for (int j = 0; j < pocetZloziek; j++) {
						for (int i = 0; i < pocetRovnic; i++) {
							if (m[i][j] == 1) {
								output += "x" + (j + 1) + " = " + m[i][pocetZloziek]+"\r\n";
							}
						}
					}

				}
				
				else {
					if (pocetZaclenenych < pocetZloziek) {
						output += pocetZaclenenych + " = h(A) < n = " + pocetZloziek + "\r\nSystem linearnych rovnic ma nekonecne vela rieseni zavislych od n-h(A) = "+
							pocetZloziek + " - " + pocetZaclenenych + " = " + (pocetZloziek-pocetZaclenenych)+ " teda od nezaclenenych premennych " + nezaclenene + ". Z poslednej casti tabulky plati:\r\n";

						int count = 0;
						for (int j = 0; j < pocetZloziek; j++) {
							for (int i = 0; i < pocetRovnic; i++) {
								if (m[i][j] == 1 && field->Contains("x"+(j+1))) {
									output += "x" + (j + 1) + " = ";
									Boolean sign = false;
									for (int k = 0; k < pocetZloziek; k++) {
										if (j != k) {
											double help = m[i][k] * (-1);
											if (k < pocetZloziek - 1 && k > 0)
												if (help > 0) {
													if(sign)output += " + ";
													if (help != 1) output += help;
													output += "x" + (k + 1);
													sign = true;
												}

												else if (help < 0) {
													output += " ";
													if (help != -1) output += help;
													else output += "-";
													output += "x" + (k + 1);
													sign = true;
												}
										}
										
									}
									output += "\r\n";
								}
							}
						}
					}
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