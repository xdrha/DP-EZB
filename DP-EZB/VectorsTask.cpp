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
		int count = 0;
		String^ all = "{ ";
		String^ zaclenene = "";
		String^ nezaclenene = "";
		String^ vektorB = "";
		String^ output = "";

		for (int i = 1; i <= pocetVektorov - vectorB; i++) {
			all += "a" + i;
			if (i < pocetVektorov - vectorB)
				all += ", ";
			if (pocetZaclenenychVektorov[i - 1] == 1) {
				count++;
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

		if (check == 0) {
			if (count == pocetVektorov - vectorB) {
				output = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit vsetky vektory: " + zaclenene + " z vektorov " + all +
					".\r\n\r\n";
			}
			else {
				if (count > 0) {
					output = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit najviac " + count + " vektory: " + zaclenene + " z vektorov " + all +
						" a ostatne vektory " + nezaclenene + " su linearnou kombinaciou zaclenenych (bazickych) vektorov:\r\n\r\n";
				}
			}
		}
		else {
			output = "Koniec vypoctu!\r\n\r\nZo systemu vektorov " + all + " sme do bazy zaclenili vektory " + zaclenene + " a tieto su linearne nezavisle, preto system vektorov { " +
				zaclenene + " } tvori jednu z moznych baz.\r\n\r\n";
			if (nezaclenene != "") output += "Nezacleneny vektor " + nezaclenene + " sa da vyjadrit ako jednoznacna linearna kombinacia vektorov bazy : ";

		}


		//ak je vektor v baze tak vypis jeho suradnice

		for (int j = 1; j <= pocetVektorov; j++) {
			String^ heplField = field;

			String^ lk = "";
			if (pocetZaclenenychVektorov[j - 1] == 0) {
				lk += "a" + j + " = ";
				Boolean sign = false;
				for (int i = 0; i < pocetSuradnic; i++) {
					if (m[i][j - 1] < 0) {
						String^ help = "";
						help += heplField->Substring(0, heplField->IndexOf("/"));
						lk += m[i][j - 1] + " * " + help->Substring(0, 2);
						if (!sign) sign = true;
					}
					else {
						if (m[i][j - 1] > 0) {
							String^ help = "";
							help += heplField->Substring(0, heplField->IndexOf("/"));
							if (sign) lk += " + ";
							lk += m[i][j - 1] + " * " + help->Substring(0, 2);
							if (!sign) sign = true;
						}
					}
					heplField = heplField->Remove(0, heplField->IndexOf("/") + 1);
				}
				if (vectorB == 1 && j == pocetVektorov)
					vektorB = lk->Substring(3, lk->Length - 3);
				else
					output += lk + "\r\n";
			}
		}

		output += "\r\n";

		//linearne zavisly / nezavisly

		if (check == 0) {
			if (count == pocetVektorov - vectorB) {
				output += "System vektorov A = " + all +
					" je jednou z moznych baz. Vsetky vektory boli zaclenene do bazy a su linearne nezavisle.\r\n\r\n";
			}
			else {
				if (count > 0) {
					output += "System vektorov A = " + all +
						" je linearne zavisly, pretoze aspon jeden z vektorov je linearnou kombinaciou ostatnych vektorov.\r\n\r\n";
				}
				else {
					output += "System vektorov A = " + all +
						" nie je linearne zavisly, pretoze ziadny z vektorov nie je linearnou kombinaciou ostatnych vektorov.\r\n\r\n";
				}
			}
		}
		else {
			output += "System vektorov { " + zaclenene + " } generuje ten isty podpriestor ako povodny system, teda plati:\r\nL " +
				all + " = L { " + zaclenene + " }\r\n\r\n";

		}



		//h(a1-an)

		output += "Maximalny pocet vektorov systemu " + all + " ktore mozeme zaclenit do bazy je " + count + ". Preto: h" +
			all + " = " + count + ".\r\n\r\n";

		//ci je vektor b linearnou kombinaciou

		if (vectorB == 1) {
			for (int i = 0; i < pocetSuradnic; i++) { //nulovy riadok
				int count = 0;
				for (int j = 1; j <= pocetVektorov - vectorB; j++)
					if (m[i][j - 1] != 0) count++;
				if (count == 0 && m[i][pocetVektorov] != 0) {
					//nie je linearnou kombinaciou vektorov bazy + vypis bazu pretoze zlozka bindex != 0
					output += "vektor b nie je linearnou kombinaciou vektorov bazy { " + zaclenene + " }, pretoze zlozka b" + (i + 1) + " != 0.\r\n";
					return output;
				}
			}
			output += "vektor b je linearnou kombinaciou bazickych vektorov " + zaclenene + " a plati: b = " + vektorB + ".\r\n";
		}

		return output;
	}

	};
}