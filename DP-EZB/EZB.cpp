
namespace DP_EZB {

	class EZB {

	private: int** oldMatrix;
	private: int** newMatrix;
	private: int width;
	private: int height;
	private: int pocetZaclenenychVektorov[5] = { 0,0,0,0,0 };



	public: EZB(int** matrix, int w, int h) {
		this->oldMatrix = matrix;
		this->height = h;
		this->width = w;
	}

	public: int checkMatrix() {
		for (int i = 0; i < height; i++) { //nulovy riadok
			if (oldMatrix[i][width-1] == 0) return 0;
		}
		int count = 0;
		for (int i = 0; i < width - 1; i++) {
			count += pocetZaclenenychVektorov[i];
		}
		if (count = width - 1) return 1; //vsetky vektory zaclenene v baze


		return 2;
	}

	public: int** ezb(int pivotX, int pivotY) {



		return newMatrix;
	}

	};
}