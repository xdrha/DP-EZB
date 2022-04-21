#include "MatrixNewTaskDialog.h"
#include <iostream>
#include <string.h>

namespace DP_EZB {

	class MatrixTask {


	public: int pocetRiadkov;
	public: int pocetStlpcov;
	public:	double** matrix;
	public: int vectorB;
	public: int type; // 1 or 2 ...

	public: MatrixTask(int pocetV, int pocetS, double** m, int vB, int t) {
		this->pocetRiadkov = pocetV;
		this->pocetStlpcov = pocetS;
		
		this->vectorB = vB;
		this->type = t;

		if (t == 3) doubleMatrix(m);
		else this->matrix = m;
	}

	private: void doubleMatrix(double** m) {

		matrix = new double* [pocetRiadkov];
		for (int h = 0; h < pocetRiadkov; h++)
		{
			matrix[h] = new double[pocetStlpcov*2];
		}

		for (int i = 0; i < pocetRiadkov; i++) {
			for (int j = 0; j < pocetStlpcov*2; j++) {
				if (j < pocetStlpcov) matrix[i][j] = m[i][j];
				else if (j - pocetStlpcov == i) matrix[i][j] = 1;
				else matrix[i][j] = 0;
			}
		}
	}

	public: String^ getResult(double** m, int check, int* pocetZaclenenychVektorov, int* pocetBazickychVektorov, String^ field, int rowCount) {
		// zaclenene vektory + ich zlozky
		int pocetZaclenenych = 0;
		String^ all = "{ ";
		String^ zaclenene = "";
		String^ nezaclenene = "";
		String^ vektorB = "";
		String^ output = "";

		for (int i = 1; i <= pocetStlpcov - vectorB; i++) {
			all += "s" + i;
			if (i < pocetStlpcov - vectorB)
				all += ", ";
			if (pocetZaclenenychVektorov[i - 1] == 1) {
				pocetZaclenenych++;
				zaclenene += "s" + i;
				if (i < pocetStlpcov - vectorB) {
					zaclenene += ", ";
				}
			}
			else {
				nezaclenene += "s" + i;
				if (i < pocetStlpcov - vectorB) {
					nezaclenene += ", ";
				}
			}
		}
		all += " }";

		if (check == 0) {
			if (pocetZaclenenych == pocetStlpcov - vectorB) {
				output = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit vsetky stlpcove vektory matice: " + zaclenene + ".\r\n\r\n";
			}
			else {
				if (pocetZaclenenych > 0) {
					output = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit najviac " + pocetZaclenenych + " stlpcove vektory: " + zaclenene + "\r\n\r\n";
				}
			}
		}
		else {
			if (pocetZaclenenych == pocetStlpcov - vectorB) {
				output = "Koniec vypoctu!\r\n\r\nZo systemu stlpcovych vektorov matice sme do bazy zaclenili vsetky vektory " + zaclenene + " a tieto su linearne nezavisle, preto system vektorov { " +
					zaclenene + " } tvori jednu z moznych baz.\r\n\r\n";
			}
			else {
				output = "Koniec vypoctu!\r\n\r\nZo systemu stlpcovych vektorov matice " + all + " sme do bazy zaclenili vektory " + zaclenene + " a tieto su linearne nezavisle, preto system vektorov { " +
					zaclenene + " } tvori jednu z moznych baz.\r\n\r\n";
			}
		}

		//h(a1-an)

		output += "Maximalny pocet stlpcovych vektorov matice " + all + ", ktore mozeme zaclenit do bazy je " + pocetZaclenenych + ".\r\nPreto: h" +
			all + " = " + pocetZaclenenych + ".\r\n\r\n";

		// tu sa vypise rozklad matice

		if (type == 2) {
			// prvych h vektrov musi byt lineane nezavislych
			Boolean lnz = true;
			for (int i = 0; i < pocetStlpcov; i++) {
				if (i < pocetZaclenenych && pocetZaclenenychVektorov[i] == 0) lnz = false;
				if (i >= pocetZaclenenych && pocetZaclenenychVektorov[i] == 1) lnz = false;
			}
			if (!lnz) {
				output += "Prvych h = " + pocetZaclenenych + " stlpcovych vektorov matice nie je linearne nezavislych. Nie je mozne rozlozit maticu na sucin !";
			}
			else {
				//ak je h vektrov lineane nezavislych
				//matica B
				output += "Rozklad matice: A = B * C = B * (E | D)\r\n\r\nMatica B = ( ";

				for (int i = 0; i < pocetRiadkov; i++) {
					for (int j = 0; j < pocetZaclenenych; j++) {
						output += round_up(matrix[i][j], 2);
						if (j < pocetZaclenenych - 1) output += "; ";
						else output += " ";

					}
					if (i == pocetRiadkov - 1) output += " )\r\n\r\n";
					else output += "\r\n\t   ";
				}

				//Matice E,D

				String^ MatrixE = "Matica E = ( ";
				String^ MatrixD = "Matica D = ( ";
				int count = 0;
				for (int j = 0; j < pocetZaclenenych; j++) {
					for (int i = 0; i < pocetRiadkov; i++) {
						if (m[i][j] == 1) {
							for (int k = 0; k < pocetStlpcov; k++) {
								if (k < pocetZaclenenych) {
									MatrixE += round_up(m[i][k], 2);
									if (k < pocetZaclenenych - 1) MatrixE += "; ";
									else MatrixE += " ";
								}
								else {
									MatrixD += round_up(m[i][k], 2);
									if (k < pocetStlpcov - 1) MatrixD += "; ";
									else MatrixD += " ";
								}

							}
							if (pocetZaclenenych - 1 == count) {
								MatrixE += " )\r\n\r\n";
								MatrixD += " )\r\n\r\n";
							}
							else if (pocetZaclenenych - 1 > count) {
								MatrixE += "\r\n\t   ";
								MatrixD += "\r\n\t   ";
							}
							count++;
						}
					}
				}

				output += MatrixE + MatrixD;

			}


		}

		if (type == 3) {
			if (pocetZaclenenych == pocetStlpcov - vectorB) {
				output += "Stvorcova matica je preto regularna a existuje k nej inverzna matica:\r\n\r\nA * A-1 = E\r\n\r\nMatica A = ( ";

				//tu vypis inverznu maticu
				// matica A
				for (int i = 0; i < pocetRiadkov; i++) {
					for (int j = 0; j < pocetStlpcov; j++) {
						output += round_up(matrix[i][j], 2);
						if (j < pocetStlpcov - 1) output += "; ";
						else output += " ";

					}
					if (i == pocetRiadkov - 1) output += " )\r\n\r\n";
					else output += "\r\n\t   ";
				}

				//matica A-1
				String^ MatrixE = "Matica E = ( ";
				String^ MatrixD = "Matica A-1 = ( ";
				int count = 0;
				for (int j = 0; j < pocetStlpcov; j++) {
					for (int i = 0; i < pocetRiadkov; i++) {
						if (m[i][j] == 1) {
							for (int k = 0; k < pocetStlpcov*2; k++) {
								if (k < pocetStlpcov) {
									MatrixE += round_up(m[i][k], 2);
									if (k < pocetStlpcov - 1) MatrixE += "; ";
									else MatrixE += " ";
								}
								else {
									MatrixD += round_up(m[i][k], 2);
									if (k < pocetStlpcov*2 - 1) MatrixD += "; ";
									else MatrixD += " ";
								}

							}
							if (pocetStlpcov - 1 == count) {
								MatrixE += " )\r\n\r\n";
								MatrixD += " )\r\n\r\n";
							}
							else if (pocetStlpcov - 1 > count) {
								MatrixE += "\r\n\t   ";
								MatrixD += "\r\n\t   ";
							}
							count++;
						}
					}
				}
				output += MatrixD + MatrixE;

			}
			else output += "Stvorcova matica preto nie je regularna a neexistuje k nej inverzna matica!\r\n\r\n";
		}

		//ci je vektor b linearnou kombinaciou

		if (vectorB == 1) {

			String^ heplField = field;
				Boolean sign = false;
				for (int i = 0; i < pocetRiadkov; i++) {
					if (m[i][pocetStlpcov - 1] < 0) {
						String^ help = "";
						help += heplField->Substring(0, heplField->IndexOf("/"));
						vektorB += round_up(m[i][pocetStlpcov - 1], 2).ToString() + " * " + help->Substring(0, 2);
						if (!sign) sign = true;
					}
					else {
						if (m[i][pocetStlpcov - 1] > 0) {
							String^ help = "";
							help += heplField->Substring(0, heplField->IndexOf("/"));
							if (sign) vektorB += " + ";
							vektorB += round_up(m[i][pocetStlpcov - 1], 2).ToString() + " * " + help->Substring(0, 2);
							if (!sign) sign = true;
						}
					}
					heplField = heplField->Remove(0, heplField->IndexOf("/") + 1);
				}


			for (int i = 0; i < pocetRiadkov; i++) { //nulovy riadok
				int count = 0;
				for (int j = 1; j <= pocetStlpcov - vectorB; j++)
					if (m[i][j - 1] != 0) count++;
				if (count == 0 && m[i][pocetStlpcov] != 0) {
					//nie je linearnou kombinaciou vektorov bazy + vypis bazu pretoze zlozka bindex != 0
					output += "Vektor b nie je linearnou kombinaciou vektorov bazy { " + zaclenene + " }, pretoze zlozka b" + (i + 1) + " != 0.\r\nPreto vektor b nie je kompatibilny so stlpcovym podpriestorom matice.";
					return output;
				}
			}
			output += "Vektor b je linearnou kombinaciou bazickych vektorov " + zaclenene + " a plati: b = " + vektorB + ".\r\nVektor b je je kompatibilny so stlpcovym podpriestorom matice.";
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