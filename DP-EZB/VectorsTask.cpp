#include "VectorsNewTaskDialog.h"
#include <iostream>
#include <string.h>

namespace DP_EZB {

	class VectorsTask {


	public: int pocetVektorov;
	public: int pocetSuradnic;
	public:	double** matrix;
	public: int vectorB;

	public: VectorsTask(int pocetV, int pocetS, double** m, int vB) {
		this->pocetVektorov = pocetV;
		this->pocetSuradnic = pocetS;
		this->matrix = m;
		this->vectorB = vB;
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

	public: String^ getResult(double** m, int check, int* pocetZaclenenychVektorov, String^ field, int rowCount) {
		// zaclenene vektory + ich zlozky
		int pocetZaclenenych = 0;
		int pocetNeZaclenenych = 0;
		String^ all = "{ ";
		String^ zaclenene = "";
		String^ nezaclenene = "";
		String^ nezaclenenelk = "";
		String^ vektorB = "b\u20D7 = ";
		String^ output = "Koniec výpočtu!\r\n\r\n";

		for (int i = 1; i <= pocetVektorov - vectorB; i++) {
			all += "a" + subscript(i.ToString()) + "\u20D7";
			if (i < pocetVektorov - vectorB)
				all += ", ";
			if (pocetZaclenenychVektorov[i - 1] == 1) {
				if (i <= pocetVektorov - vectorB && zaclenene->Length != 0) {
					zaclenene += ", ";
				}
				pocetZaclenenych++;
				zaclenene += "a" + subscript(i.ToString()) + "\u20D7";

			}
			else {
				if (i <= pocetVektorov - vectorB && nezaclenene->Length != 0) {
					nezaclenene += ", ";
				}
				nezaclenene += "a" + subscript(i.ToString()) + "\u20D7";
				pocetNeZaclenenych++;
				
			}
		}
		all += " }";

		//ak je vektor v baze tak vypis jeho suradnice

		for (int j = 1; j <= pocetVektorov; j++) {
			String^ helpField = field;

			String^ lk = "";

			if (pocetZaclenenychVektorov[j - 1] == 0) {
				lk += "a" + subscript(j.ToString()) + "\u20D7 = ";
				Boolean sign = false;
				for (int i = 0; i < pocetSuradnic; i++) {
					if (m[i][j - 1] < 0) {
						String^ help = "";
						help += helpField->Substring(0, helpField->IndexOf("/"));
						lk += round_up(m[i][j - 1], 2).ToString() + " \u2219 " + help->Substring(0, 3);
						if (!sign) sign = true;
					}
					else {
						if (m[i][j - 1] > 0) {
							String^ help = "";
							help += helpField->Substring(0, helpField->IndexOf("/"));
							if (sign) lk += " + ";
							lk += round_up(m[i][j - 1], 2).ToString() + " \u2219 " + help->Substring(0, 3);
							if (!sign) sign = true;
						}
					}
					helpField = helpField->Remove(0, helpField->IndexOf("/") + 1);
				}
				if (vectorB == 1 && j == pocetVektorov)
					vektorB += lk->Substring(5, lk->Length - 5);
				else
					nezaclenenelk += lk + "\r\n";
			}
		}

		//linearne zavisly / nezavisly

		if (check == 0) {
			if (pocetZaclenenych == pocetVektorov - vectorB) {
				output += "a) Systém vektorov A = " + all +
					" je lineárne nezávislý. Všetky vektory boli začlenené do bázy.\r\n\r\n";
			}
			else {
				if (pocetZaclenenych > 0) {
					String^ help = "";

					if (pocetNeZaclenenych == 1)help = "vektor " + nezaclenene + " je";
					else help = "vektory " + nezaclenene + " sú";

					output += "a) Systém vektorov A = " + all +
						" je lineárne závislý, pretože " + help + " lineárnou kombináciou bázických vektorov.\r\n\r\n";

					if (pocetNeZaclenenych == 1)help = "Nezačlenený vektor " + nezaclenene;
					else help = "Nezačlenené vektory " + nezaclenene;

					output += help + " vyjadríme ako jednoznačnú kombináciu bázických vektorov: \r\n\r\n" + nezaclenenelk + "\r\n\r\n";
				}
			}
		}
		else {
			if (pocetZaclenenych == pocetVektorov - vectorB) {
				output += "a) Systém vektorov A = " + all +
					" je lineárne nezávislý. Všetky vektory boli začlenené do bázy.\r\n\r\n";
			}
			else {
				String^ help = "";
				if (pocetNeZaclenenych == 1)help = "vektor " + nezaclenene + " je";
				else help = "vektory " + nezaclenene + " sú";
				output += "a) Systém vektorov A = " + all +
					" je lineárne závislý, pretože "+ help +" lineárnou kombináciou bázických vektorov.\r\n\r\n";
				if (pocetNeZaclenenych == 1)help = "Nezačlenený vektor " + nezaclenene;
				else help = "Nezačlenené vektory " + nezaclenene;
				output += help +" vyjadríme ako jednoznačnú kombináciu bázických vektorov: \r\n\r\n" + nezaclenenelk + "\r\n\r\n";
			}

		}

		//h(a1-an)
		String^ help = "";
		if (pocetZaclenenych == 1) help = " vektor";
		if (pocetZaclenenych == 5) help = " vektorov";
		if(pocetZaclenenych>1 && pocetZaclenenych < 5) help = " vektory";

		output += "b) Do bázy sa nám podarilo začleniť " + pocetZaclenenych + help + ".\r\nPreto: h(A) = " + pocetZaclenenych + ".\r\n\r\n";

		//ci je vektor b linearnou kombinaciou

		if (vectorB == 1) {
			for (int i = 0; i < pocetSuradnic; i++) { //nulovy riadok
				int count = 0;
				for (int j = 1; j <= pocetVektorov - vectorB; j++)
					if (m[i][j - 1] != 0) count++;

				if (count == 0 && m[i][pocetVektorov] != 0) {
					//nie je linearnou kombinaciou vektorov bazy + vypis bazu pretoze zlozka bindex != 0
					output += "c) Vektor b\u20D7 nie je lineárnou kombináciou vektorov bázy { " + zaclenene + " }, pretože zložka b" + subscript((i + 1).ToString()) + " \u2260 0.\r\n";
					return output;
				}
			}
			output += "c) Vektor b\u20D7 je lineárnou kombináciou bázickych vektorov " + zaclenene + " a môžeme ho vyjadriť ako jednoznačnú kombináciu bázických vektorov:\r\n\r\n" + vektorB;
		}

		return output;
	}

	double round_up(double value, int decimal_places) {
		const double multiplier = std::pow(10.0, decimal_places);
		return std::ceil(value * multiplier) / multiplier;
	}

	};
}