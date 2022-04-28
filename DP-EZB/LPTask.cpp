#include "MatrixNewTaskDialog.h"
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

	public: String^ getResult(double** m, int check, int* pocetZaclenenychVektorov,int* indexyZaclenenych, int* values, Boolean maxmin, double HUF, Boolean optimalne, Boolean nepripustne, Boolean neohranicena) {
		// zaclenene premenne + ich zlozky

		String^ output = "";

		output += "\r\n\r\nb) ";


		if (nepripustne) return output += "Nie je splnená podmienka primárnej prípustnosti. Úloha lineárneho programovania nemá riešenie.\r\n\r\n";

		if (optimalne) {
			//xvector = (0,0,0,...n) for sirka getvalues()
			//uf vypisat = HUF
			output += "Našli sme optimálne riešenie úlohy:\r\n";
			String^ zlozky = "x = (";
			String^ uf = "Účelová funkcia: ";
			String^ ufh = " = ";
			Boolean sign = false;
			if (maxmin) uf += "max(f) = ";
			else uf += "min(f) = ";

			for (int i = 0; i < pocetPremennych + pocetOhraniceni; i++) {
				
				if (pocetZaclenenychVektorov[i] == 1) { // zlozka je zaclenena

					zlozky += round_up(m[indexyZaclenenych[i]][pocetPremennych + pocetOhraniceni], 2) + "; ";
					
					if (i < pocetPremennych) {
						if (values[i] > 0) {
							if (sign) {
								uf += " + ";
								ufh += " + ";
							}
							sign = true;
							uf += values[i] + "x" + subscript((i + 1).ToString());
							ufh += values[i] + " \u2219 " + round_up(m[indexyZaclenenych[i]][pocetPremennych + pocetOhraniceni], 2) + " ";
						}
						if (values[i] < 0) {
							if (sign) {
								uf += " ";
								ufh += " ";
							}
							sign = true;
							uf += values[i] + "x" + subscript((i + 1).ToString());
							ufh += values[i] + " \u2219 " + round_up(m[indexyZaclenenych[i]][pocetPremennych + pocetOhraniceni], 2) + " ";
						}
					}
				}
				else {
					zlozky += "0; ";

					if (i < pocetPremennych) {
						if (values[i] > 0) {
							if (sign) {
								uf += " + ";
								ufh += " + ";
							}
							sign = true;
							uf += values[i] + "x" + subscript((i + 1).ToString());
							ufh += values[i] + " \u2219 0 ";
						}
						if (values[i] < 0) {
							if (sign) {
								uf += " ";
								ufh += " ";
							}
							sign = true;
							uf += values[i] + "x" + subscript((i + 1).ToString());
							ufh += values[i] + " \u2219 0 ";
						}
					}

				}
				
			}

			zlozky = zlozky->Remove(zlozky->Length - 2, 1);
			zlozky += ")\r\n";
			output += zlozky;
			output += uf + " = " + ufh + " = " + HUF;

			return output;
		}

		if (neohranicena) return output += "Hodnota účelovej funkcie môže rásť/klesať do +∞/−∞. Hodnota účelovej funkcie je na množine prípustných riešení neohraničená.\r\n\r\n";

		return "Nepodarilo sa nájsť riešenie !!";



	}

	};
}