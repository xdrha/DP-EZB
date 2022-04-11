#include <iostream>
#include <string>

namespace DP_EZB {

	class EZB {

	private: int** oldMatrix;
	private: int** newMatrix = 0;
	private: int width;
	private: int height;
	private: int pocetZaclenenychVektorov[5] = { 0,0,0,0,0 };


	public: EZB(int** matrix, int w, int h) {
		this->oldMatrix = matrix;
		this->height = h;
		this->width = w;

		newMatrix = new int* [height];
		for (int h = 0; h < height; h++)
		{
			newMatrix[h] = new int[width + 1];
		}
	}

	public: int checkMatrix() {
		/*for (int i = 0; i < height; i++) { //nulovy riadok
			int count = 0;
			for (int j = 0; j < width; j++)
				if (oldMatrix[i][j] != 0) count ++;
			if (count == 0) return 5;
		}*/

		int count = 0;

		for (int i = 0; i < width - 1; i++) {
			count += pocetZaclenenychVektorov[i];
		}
		if (count == width - 1) 
			return 1; //vsetky vektory zaclenene v baze

		return 2;
	}

	public: int** ezb(int pivotXColumn, int pivotYRow) {

		int pivot = oldMatrix[pivotYRow][pivotXColumn];

		for (int j = 0; j < width; j++) {
				
			for (int i = 0; i < height; i++) {		
				if (j == pivotXColumn) {
					if (i == pivotYRow) {
						newMatrix[i][j] = 1;
					}
					else {
						newMatrix[i][j] = 0;
					}
				}
				else {
					if (i == pivotYRow) {
						newMatrix[i][j] = oldMatrix[i][j] / pivot;
					}
					else {
						int sigma = oldMatrix[pivotYRow][j] / pivot;
						newMatrix[i][j] = oldMatrix[i][j] - (sigma * oldMatrix[i][pivotXColumn]);
					}
				}
			}
		}


		oldMatrix = newMatrix;
		return newMatrix;
	}

	};
}