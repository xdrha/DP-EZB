#include "MatrixNewTaskDialog.h"
#include <iostream>
#include <string>

namespace DP_EZB {

	class MatrixTask {


	public: int pocetRiadkov;
	public: int pocetStlpcov;
	public:	double** matrix;
	public: int type; // 1 or 2 ...

	public: MatrixTask(int pocetV, int pocetS, double** m, int t) {
		this->pocetRiadkov = pocetV;
		this->pocetStlpcov = pocetS;
		this->type = t;

		if (t == 3) doubleMatrix(m);
		else this->matrix = m;
	}

	private: void doubleMatrix(double** m) {

		matrix = new double* [pocetRiadkov];
		for (int h = 0; h < pocetRiadkov; h++)
		{
			matrix[h] = new double[pocetStlpcov * 2];
		}

		for (int i = 0; i < pocetRiadkov; i++) {
			for (int j = 0; j < pocetStlpcov * 2; j++) {
				if (j < pocetStlpcov) matrix[i][j] = m[i][j];
				else if (j - pocetStlpcov == i) matrix[i][j] = 1;
				else matrix[i][j] = 0;
			}
		}
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
		if (c == "10") return "₁₀";
		return "";
	}

	private: String^ subscriptBack(String^ c) {
		if (c == "₀") return "0";
		if (c == "₁") return "1";
		if (c == "₂") return "2";
		if (c == "₃") return "3";
		if (c == "₄") return "4";
		if (c == "₅") return "5";
		if (c == "₆") return "6";
		if (c == "₇") return "7";
		if (c == "₈") return "8";
		if (c == "₉") return "9";
		if (c == "₁₀") return "10";
		return "";
	}

	private: String^ superscript(String^ c) {
		if (c == "0") return "⁰";
		if (c == "1") return "¹";
		if (c == "2") return "²";
		if (c == "3") return "³";
		if (c == "4") return "⁴";
		if (c == "5") return "⁵";
		if (c == "6") return "⁶";
		if (c == "7") return "⁷";
		if (c == "8") return "⁸";
		if (c == "9") return "⁹";
		if (c == "10") return "¹⁰";
		return "";
	}

	public: String^ getResult(double** m, int check, int* pocetZaclenenychVektorov, int* pocetBazickychVektorov, String^ field, int rowCount, double* pivots) {
		// zaclenene vektory + ich zlozky
		int pocetZaclenenych = 0;
		String^ all = "{ ";
		String^ zaclenene = "";
		String^ nezaclenene = "";
		String^ vektorB = "";
		String^ output = "";

		for (int i = 1; i <= pocetStlpcov; i++) {
			all += "s" + subscript(i.ToString()) + "\u20D7";
			if (i < pocetStlpcov )
				all += ", ";
			if (pocetZaclenenychVektorov[i - 1] == 1) {
				pocetZaclenenych++;
				zaclenene += "s" + subscript(i.ToString()) + "\u20D7";
				if (i < pocetStlpcov) {
					zaclenene += ", ";
				}
			}
			else {
				nezaclenene += "s" + subscript(i.ToString()) + "\u20D7";
				if (i < pocetStlpcov) {
					nezaclenene += ", ";
				}
			}
		}
		all += " }";

		/*if (check == 0) {
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
		}*/

		//h(a1-an)
		if (type == 1) output += "a) Maximálny počet stĺpcových vektorov matice " + all + ", ktoré môžeme začlenit do bázy je " + pocetZaclenenych + ".\r\nPreto: h" +
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
				output += "a) Prvých h = " + pocetZaclenenych + " stĺpcových vektorov matice nie je lineárne nezávislých. Nie je možné rozložiť maticu na súčin.\r\n\r\n";
			}
			else {
				output += "a) Prvých h = " + pocetZaclenenych + " stĺpcových vektorov matice je lineárne nezávislých. Maticu je možné rozložiť na súčin.\r\n\r\n";
				//ak je h vektrov lineane nezavislych
				//matica B
				if (pocetZaclenenych == pocetStlpcov) {
					output += "b) Boli začlenné všetky stĺpcové vektory matice, jedná sa o triviálny rozklad A = B \u2219 C = E" + subscript(pocetZaclenenych.ToString()) + " \u2219 A.\r\n\r\nMatica A = ( ";
				}
				else{
					output += "b) Rozklad matice: A = B \u2219 C = B \u2219 (E | D)\r\n\r\nMatica B = ( ";
				}

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

				output += MatrixE;
				if (pocetZaclenenych != pocetStlpcov) output += MatrixD;

			}


		}

		if (type == 3) {
			if (pocetZaclenenych == pocetStlpcov) {
				output += "a) h(A) = " + pocetZaclenenych + " preto je matica A" + subscript(pocetStlpcov.ToString()) + " regulárna a existuje k nej inverzná matica: \r\n\r\nA \u2219 A\u207B¹ = E\r\n\r\nb) Matica A = (";

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
				String^ MatrixD = "Matica A\u207B¹ = ( ";
				int count = 0;
				for (int j = 0; j < pocetStlpcov; j++) {
					for (int i = 0; i < pocetRiadkov; i++) {
						if (m[i][j] == 1) {
							for (int k = 0; k < pocetStlpcov * 2; k++) {
								if (k < pocetStlpcov) {
									MatrixE += round_up(m[i][k], 2);
									if (k < pocetStlpcov - 1) MatrixE += "; ";
									else MatrixE += " ";
								}
								else {
									MatrixD += round_up(m[i][k], 2);
									if (k < pocetStlpcov * 2 - 1) MatrixD += "; ";
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
			else output += "a) h(A) = " + pocetZaclenenych + " < " + pocetStlpcov + " preto je matica A" + subscript(pocetStlpcov.ToString()) +" singulárna a neexistuje k nej inverzná matica A\u207B¹\r\n\r\n";
		}

		if (type == 4) {
			if (pocetZaclenenych == pocetStlpcov) {
				String^ permutacia = "I(";
				int pocetPermutacii = 0;

				String^ helpField = field;
				String^ help;
				int indexes[5];
				for (int i = 0; i < pocetStlpcov; i++) {
					help = helpField->Substring(1, helpField->IndexOf("/"));
					indexes[i] = System::Convert::ToInt32(subscriptBack(help->Substring(0, 1)));
					helpField = helpField->Remove(0, helpField->IndexOf("/") + 1);
				}

				for (int i = 0; i < pocetStlpcov; i++) {
					for (int j = i + 1; j < pocetStlpcov; j++) {
						if (indexes[i] > indexes[j]) pocetPermutacii++;
					}
					permutacia += indexes[i];
					if (i < pocetStlpcov - 1) permutacia += ", ";
				}
				permutacia += ")";
				output += "a) h(A) = " + pocetZaclenenych + " preto je matica regulárna a existuje k nej determinant. Počet inverzií permutacií stĺpcových indexov je:\r\n" + permutacia + " = " + pocetPermutacii + "\r\n\r\n";
				output += "b) Determinant matice A:\r\n|A| = ";

				double result = 1;
				for (int i = 0; i < pocetStlpcov; i++) {
					if (pivots[i] < 0) output += "(";
					output += round_up(pivots[i], 2);
					if (pivots[i] < 0) output += ")";
					output += " \u2219 ";
					result *= pivots[i];
				}

				output += "(-1)" + superscript( pocetPermutacii.ToString()) + " = " + round_up(result * pow(-1, pocetPermutacii), 2) + "\r\n\r\n";

			}
			else {
				output += "a) h(A) = " + pocetZaclenenych + " < " + pocetStlpcov + " preto je matica singulárna a neexistuje k nej determinant\r\n\r\n";
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