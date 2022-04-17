#include <iostream>
#include <string>

namespace DP_EZB {

	class EZB {

	private: double** oldMatrix;
	private: double** newMatrix = 0;
	private: int width;
	private: int height;
	public: int pocetZaclenenychVektorov[5] = { 0,0,0,0,0 };
	public: int pocetBazickychVektorov[5] = { 0,0,0,0,0 };
	public: int stepTask;
	public: int iteration = 0;


	public: EZB(double** matrix, int w, int h) {
		this->oldMatrix = matrix;
		this->height = h;
		this->width = w;

		newMatrix = new double* [height];
		for (int h = 0; h < height; h++)
		{
			newMatrix[h] = new double[width + 1];
		}
	}

	public: int checkMatrix(int vB) {
		for (int i = 0; i < height; i++) { //nulovy riadok
			int count = 0;
			for (int j = 0; j < width-vB-1; j++)
				if (oldMatrix[i][j] != 0) count ++;
			if (count == 0) {
				stepTask = 0;
				return stepTask;
			}
		}

		int count = 0;

		for (int i = 0; i < width - 1; i++) {
			count += pocetZaclenenychVektorov[i];
		}
		if (height < width - 1) {
			if (count == height) {  //vsetky mozne vektory zaclenene v baze
				stepTask = 1;
				return stepTask;
			}
		}
		else {
			if (count == width - 1) {  //vsetky vektory zaclenene v baze
				stepTask = 1;
				return stepTask;
			}
		}

		stepTask = 2;
		return stepTask;
	}

	public: double** ezb(int pivotXColumn, int pivotYRow) {

		pocetZaclenenychVektorov[pivotXColumn] = 1;
		pocetBazickychVektorov[pivotYRow] = 1;

		double pivot = oldMatrix[pivotYRow][pivotXColumn];

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
						double sigma = oldMatrix[pivotYRow][j] / pivot;
						newMatrix[i][j] = oldMatrix[i][j] - (sigma * oldMatrix[i][pivotXColumn]);
					}
				}
			}
		}

		iteration++;

		for (int j = 0; j < width; j++)
			for (int i = 0; i < height; i++)
				oldMatrix[i][j] = newMatrix[i][j];

		return newMatrix;
	}

	};
}