﻿#include "MatrixNewTaskDialog.h"
#include <iostream>
#include <string>

namespace DP_EZB {

	class LPTask {


	public: int pocetOhraniceni;
	public: int pocetPremennych;
	public:	double** matrix;
	public: int zeros;


	public: LPTask(int pocetV, int pocetS, double** m, int z) {
		this->pocetOhraniceni = pocetV;
		this->pocetPremennych = pocetS;
		this->matrix = m;
		this->zeros = z;
	}

	private: String^ subscript(String^ c) {
		if (c == "0") return "₀";
		if (c == "1") return "₁";
		if (c == "2") return "₂";
		if (c == "3") return "₃";
		if (c == "4") return "₄";
		if (c == "5") return "₅";
		if (c == "6") return "₆";
		if (c == "7") return "₇";
		if (c == "8") return "₈";
		if (c == "9") return "₉";
		return "";
	}

		   double round_up(double value, int decimal_places) {
			   const double multiplier = std::pow(10.0, decimal_places);
			   return std::ceil(value * multiplier) / multiplier;
		   }

	public: String^ getResult(double** m, int check, int* pocetZaclenenychVektorov, int* pocetBazickychVektorov, String^ field, int rowCount) {
		// zaclenene premenne + ich zlozky
		int pocetZaclenenych = 0;
		String^ all = "{ ";
		String^ zaclenene = "";
		String^ nezaclenene = "";
		String^ vektorB = "";
		String^ output = "";

		for (int i = 1; i <= pocetPremennych; i++) {
			all += "x" + subscript(i.ToString());
			if (i < pocetPremennych)
				all += ", ";
			if (pocetZaclenenychVektorov[i - 1] == 1) {
				pocetZaclenenych++;
				zaclenene += "x" + subscript(i.ToString());
				if (i < pocetPremennych) {
					zaclenene += ", ";
				}
			}
			else {
				nezaclenene += "x" + subscript(i.ToString());
				if (i < pocetPremennych) {
					nezaclenene += ", ";
				}
			}
		}
		all += " }";

		//h(a1-an)

		output += "Koniec výpočtu!\r\n\r\na) h(A) = h" + all + " = " + pocetZaclenenych + ".\r\n";

		String^ heplField = field;
		Boolean sign = false;
		for (int i = 0; i < pocetOhraniceni; i++) {
			if (m[i][pocetPremennych - 1] < 0) {
				String^ help = "";
				help += heplField->Substring(0, heplField->IndexOf("/"));
				vektorB += round_up(m[i][pocetPremennych - 1], 2).ToString() + " \u2219 " + help->Substring(0, 2);
				if (!sign) sign = true;
			}
			else {
				if (m[i][pocetPremennych - 1] > 0) {
					String^ help = "";
					help += heplField->Substring(0, heplField->IndexOf("/"));
					if (sign) vektorB += " + ";
					vektorB += round_up(m[i][pocetPremennych - 1], 2).ToString() + " \u2219 " + help->Substring(0, 2);
					if (!sign) sign = true;
				}
			}
			heplField = heplField->Remove(0, heplField->IndexOf("/") + 1);
		}
		int vectorBrank = 0;

		for (int i = 0; i < pocetOhraniceni; i++) { //nulovy riadok
			int count = 0;
			for (int j = 1; j <= pocetPremennych; j++)
				if (m[i][j - 1] != 0) count++;
			if (count == 0 && m[i][pocetPremennych] != 0) {
				//nie je linearnou kombinaciou vektorov bazy
				vectorBrank++;
			}
		}

		if (vectorBrank > 0) {
			output += "h(A|b\u20D7) = " + (vectorBrank + pocetZaclenenych) + "\r\n";
			output += "h(A) \u2260 h(A\u20D7) Preto systém lineárnych rovníc nemá riešenie.";
		}
		else {
			if (pocetZaclenenych == pocetPremennych) {
				output += "h(A|b\u20D7) = " + pocetZaclenenych + "\r\n";
				if (!zeros) {
					output += "h(A) = h(A\u20D7) = " + pocetZaclenenych + " a zároveň b\u20D7 = 0, preto má systém lineárnych rovníc triviálne riešenie: \r\n\r\n";
				}
				else {
					output += "h(A) = h(A\u20D7) = " + pocetZaclenenych + " Preto má systém lineárnych rovníc jedno riešenie: \r\n\r\n";
				}


				int count = 0;
				String^ M = "b) M = {(";
				for (int j = 0; j < pocetPremennych; j++) {
					for (int i = 0; i < pocetOhraniceni; i++) {
						if (m[i][j] == 1) {
							if (!zeros) M += "0; ";
							else M += round_up(m[i][pocetPremennych], 2) + "; ";
						}
					}
				}
				M = M->Remove(M->Length - 2, 1);
				M += ")}";
				output += M;

			}

			else {
				if (pocetZaclenenych < pocetPremennych) {
					if (zeros) output += "h(A|b\u20D7) = " + pocetZaclenenych + "\r\n";
					output += pocetZaclenenych + " = h(A) < n = " + pocetPremennych + "\r\nSystém lineárnych rovníc má nekonečne veľa riešení zavislých od n-h(A) = " +
						pocetPremennych + " - " + pocetZaclenenych + " = " + (pocetPremennych - pocetZaclenenych) + " teda od nezačlenených premenných " + nezaclenene + ".\r\n\r\n";

					int count = 0;
					int lastJ = 10;
					String^ M = "b) Množina všetkých riešení v parametrickom tvare:\r\n M = {(";
					for (int j = 0; j < pocetPremennych + zeros; j++) {
						for (int i = 0; i < pocetOhraniceni; i++) {
							if (m[i][j] == 1 && field->Contains("x" + (j + 1))) {
								Boolean sign = false;
								for (int k = 0; k < pocetPremennych + zeros; k++) {
									if (j != k) {
										double help = m[i][k];
										if (k < pocetPremennych)
											help *= (-1);
										if (k < pocetPremennych + zeros)
											if (help > 0) {
												if (sign) {
													M += " + ";
												}
												if (help != 1 || k == pocetPremennych) {
													M += round_up(help, 2);
												}
												if (k < pocetPremennych) {
													M += "x" + subscript((k + 1).ToString());
												}
												sign = true;
											}

											else if (help < 0) {
												M += " ";
												if (help != -1 || k == pocetPremennych) {
													M += round_up(help, 2);;
												}
												else {
													M += "-";
												}
												if (k < pocetPremennych) {
													M += "x" + subscript((k + 1).ToString());
												}
												sign = true;
											}
									}

								}
								M += "; ";
							}
							else {
								if (!field->Contains("x" + subscript((j + 1).ToString())) && j < pocetPremennych && lastJ != j) {
									M += "x" + subscript((j + 1).ToString()) + "; ";
									lastJ = j;
								}
							}
						}
						lastJ = j;
					}
					M = M->Remove(M->Length - 2, 1);
					M += ") " + nezaclenene + " \u2208 R}";
					output += M;
				}
			}

		}

		// tu vraciam text !!
		return output;



	}

	};
}