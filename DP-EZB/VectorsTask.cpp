class VectorsTask {
public: int pocetVektorov;
public: int pocetSuradnic;
public:	int** matrix;

public: VectorsTask(int pocetV, int pocetS, int** m) {
	this->pocetVektorov = pocetV;
	this->pocetSuradnic = pocetS;
	this->matrix = m;
}
};