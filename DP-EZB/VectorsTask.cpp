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

};