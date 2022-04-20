#include "MatrixNewTaskDialog.h"
#include <iostream>
#include <string.h>

namespace DP_EZB {

	class MatrixTask {


	public: int pocetRiadkov;
	public: int pocetStlpcov;
	public:	double** matrix;
	public: int vectorB;

	public: MatrixTask(int pocetV, int pocetS, double** m, int vB) {
		this->pocetRiadkov = pocetV;
		this->pocetStlpcov = pocetS;
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

		for (int i = 1; i <= pocetStlpcov - vectorB; i++) {
			all += "s" + i;
			if (i < pocetStlpcov - vectorB)
				all += ", ";
			if (pocetZaclenenychVektorov[i - 1] == 1) {
				count++;
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
			if (count == pocetStlpcov - vectorB) {
				output = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit vsetky stlpcove vektory matice: " + zaclenene + ".\r\n\r\n";
			}
			else {
				if (count > 0) {
					output = "Koniec vypoctu!\r\n\r\ndo bazy mozno zaclenit najviac " + count + " stlpcove vektory: " + zaclenene + "\r\n\r\n";
				}
			}
		}
		else {
			output = "Koniec vypoctu!\r\n\r\nZo systemu stlpcovych vektorov matice " + all + " sme do bazy zaclenili vektory " + zaclenene + " a tieto su linearne nezavisle, preto system vektorov { " +
				zaclenene + " } tvori jednu z moznych baz.\r\n\r\n";
		}

		//h(a1-an)

		output += "Maximalny pocet stlpcovych vektorov matice " + all + ", ktore mozeme zaclenit do bazy je " + count + ". Preto: h" +
			all + " = " + count + ".\r\n\r\n";

		//ci je vektor b linearnou kombinaciou

		if (vectorB == 1) {

			String^ heplField = field;
			String^ lk = "";
				lk += "a" + pocetStlpcov + " = ";
				Boolean sign = false;
				for (int i = 0; i < pocetRiadkov; i++) {
					if (m[i][pocetStlpcov - 1] < 0) {
						String^ help = "";
						help += heplField->Substring(0, heplField->IndexOf("/"));
						lk += round_up(m[i][pocetStlpcov - 1], 2).ToString() + " * " + help->Substring(0, 2);
						if (!sign) sign = true;
					}
					else {
						if (m[i][pocetStlpcov - 1] > 0) {
							String^ help = "";
							help += heplField->Substring(0, heplField->IndexOf("/"));
							if (sign) lk += " + ";
							lk += round_up(m[i][pocetStlpcov - 1], 2).ToString() + " * " + help->Substring(0, 2);
							if (!sign) sign = true;
						}
					}
					heplField = heplField->Remove(0, heplField->IndexOf("/") + 1);
				}
				vektorB = lk->Substring(3, lk->Length - 3);


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

		return output;
	}

	double round_up(double value, int decimal_places) {
		const double multiplier = std::pow(10.0, decimal_places);
		return std::ceil(value * multiplier) / multiplier;
	}

	};
}