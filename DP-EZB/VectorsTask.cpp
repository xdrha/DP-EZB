class VectorsTask {
	int pocetVektorov;
	int pocetSuradnic;
	int** matrix;

public: VectorsTask(int pocetV, int pocetS, int** m) {
	this->pocetVektorov = pocetV;
	this->pocetSuradnic = pocetS;
	this->matrix = m;
}
};