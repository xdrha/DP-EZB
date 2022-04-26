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

	public: String^ getResult(double** m, int check, int* pocetZaclenenychVektorov, String^ field, int rowCount) {
		// zaclenene vektory + ich zlozky
		int pocetZaclenenych = 0;
		String^ all = "{ ";
		String^ zaclenene = "";
		String^ nezaclenene = "";
		String^ vektorB = "";
		String^ output = "Koniec vypoctu!\r\n\r\n";

		for (int i = 1; i <= pocetVektorov - vectorB; i++) {
			all += "a" + i;
			if (i < pocetVektorov - vectorB)
				all += ", ";
			if (pocetZaclenenychVektorov[i - 1] == 1) {
				pocetZaclenenych++;
				zaclenene += "a" + i;
				if (i < pocetVektorov - vectorB) {
					zaclenene += ", ";
				}
			}
			else {
				nezaclenene += "a" + i;
				if (i < pocetVektorov - vectorB) {
					nezaclenene += ", ";
				}
			}
		}
		all += " }";

		//ak je vektor v baze tak vypis jeho suradnice

		/*for (int j = 1; j <= pocetVektorov; j++) {
			String^ helpField = field;

			String^ lk = "";
			if (pocetZaclenenychVektorov[j - 1] == 0) {
				lk += "a" + j + " = ";
				Boolean sign = false;
				for (int i = 0; i < pocetSuradnic; i++) {
					if (m[i][j - 1] < 0) {
						String^ help = "";
						help += helpField->Substring(0, helpField->IndexOf("/"));
						lk += round_up(m[i][j - 1], 2).ToString() + " * " + help->Substring(0, 2);
						if (!sign) sign = true;
					}
					else {
						if (m[i][j - 1] > 0) {
							String^ help = "";
							help += helpField->Substring(0, helpField->IndexOf("/"));
							if (sign) lk += " + ";
							lk += round_up(m[i][j - 1], 2).ToString() + " * " + help->Substring(0, 2);
							if (!sign) sign = true;
						}
					}
					helpField = helpField->Remove(0, helpField->IndexOf("/") + 1);
				}
				if (vectorB == 1 && j == pocetVektorov)
					vektorB = lk->Substring(5, lk->Length - 5);
				else
					output += lk + "\r\n";
			}
		}

		output += "\r\n";*/

		//linearne zavisly / nezavisly

		if (check == 0) {
			if (pocetZaclenenych == pocetVektorov - vectorB) {
				output += "a) System vektorov A = " + all +
					" je linearne nezavisly. Vsetky vektory boli zaclenene do bazy a su linearne nezavisle.\r\n\r\n";
			}
			else {
				if (pocetZaclenenych > 0) {
					output += "a) System vektorov A = " + all +
						" je linearne zavisly, pretoze aspon jeden z vektorov ( " + nezaclenene + " ) je linearnou kombinaciou ostatnych vektorov.\r\n\r\n";
				}
			}
		}
		else {
			if (pocetZaclenenych == pocetVektorov - vectorB) {
				output += "a) System vektorov A = " + all +
					" je linearne nezavisly. Vsetky vektory boli zaclenene do bazy a su linearne nezavisle.\r\n\r\n";
			}
			else {
				output += "a) System vektorov A = " + all +
					" je linearne zavisly, pretoze aspon jeden z vektorov ( " + nezaclenene + " ) je linearnou kombinaciou ostatnych vektorov.\r\n\r\n";
			}

		}

		//h(a1-an)

		output += "b) Maximalny pocet vektorov systemu " + all + " ktore mozeme zaclenit do bazy je " + pocetZaclenenych + ".\r\nPreto: h" +
			all + " = " + pocetZaclenenych + ".\r\n\r\n";

		//ci je vektor b linearnou kombinaciou

		if (vectorB == 1) {
			for (int i = 0; i < pocetSuradnic; i++) { //nulovy riadok
				int count = 0;
				for (int j = 1; j <= pocetVektorov - vectorB; j++)
					if (m[i][j - 1] != 0) count++;
				if (count == 0 && m[i][pocetVektorov] != 0) {
					//nie je linearnou kombinaciou vektorov bazy + vypis bazu pretoze zlozka bindex != 0
					output += "c) Vektor b nie je linearnou kombinaciou vektorov bazy { " + zaclenene + " }, pretoze zlozka b" + (i + 1) + " != 0.\r\n";
					return output;
				}
			}
			output += "c) Vektor b je linearnou kombinaciou bazickych vektorov " + zaclenene + ".";
		}

		return output;
	}

	double round_up(double value, int decimal_places) {
		const double multiplier = std::pow(10.0, decimal_places);
		return std::ceil(value * multiplier) / multiplier;
	}

	};
}