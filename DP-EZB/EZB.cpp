#include <iostream>
#include <string.h>

namespace DP_EZB {

	class EZB {

	private: double** oldMatrix;
	private: double** newMatrix = 0;
	private: int width;
	private: int height;
	public: int pocetZaclenenychVektorov[10] = { 0,0,0,0,0,0,0,0,0,0 };
	public: int pocetBazickychVektorov[10] = { 0,0,0,0,0,0,0,0,0,0 };
	public: int indexyBazickychVektorov[10] = { 0,0,0,0,0,0,0,0,0,0 };
	public: int pocetNulovychRiadkov[10] = { 0,0,0,0,0,0,0,0,0,0 };
	public: double pivots[5];
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

	public: double getPivot(int pivotXColumn, int pivotYRow) {
		return oldMatrix[pivotYRow][pivotXColumn];
	}

	public: int checkMatrix(int vB) {
		for (int i = 0; i < height; i++) { //nulovy riadok
			int count = 0;
			for (int j = 0; j < width-vB-1; j++)
				if (oldMatrix[i][j] != 0) count ++;
			if (count == 0) {
				//zapis index nuloveho riadku
				pocetNulovychRiadkov[i] = 1;
			}
		}

		int countZaclenenych = 0;
		int countNulovych = 0;

		for (int i = 0; i < height; i++) {
			countNulovych += pocetNulovychRiadkov[i];
		}

		for (int i = 0; i < width - 1; i++) {
			countZaclenenych += pocetZaclenenychVektorov[i];
		}
				
		if (height < width - vB - 1) {
			if (countZaclenenych == height) {  //vsetky mozne vektory zaclenene v baze
				stepTask = 1;
				return stepTask;
			}
		}
		else {
			if (countZaclenenych == width - vB - 1) {  //vsetky vektory zaclenene v baze
				stepTask = 1;
				return stepTask;
			}
		}

		if (countNulovych >= height - countZaclenenych) { //vela nulovych riadkov
			stepTask = 0;
			return stepTask;
		}

		stepTask = 2;
		return stepTask;
	}

	public: double** ezb(int pivotXColumn, int pivotYRow) {

		pocetZaclenenychVektorov[pivotXColumn] = 1;
		pocetBazickychVektorov[pivotYRow] = 1;
		indexyBazickychVektorov[pivotYRow] = pivotXColumn;

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