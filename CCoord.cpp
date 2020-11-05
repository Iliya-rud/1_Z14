#include "h.h"

double CCoord :: Xi() const {//из файла CCoord.cpp
	return xi;
};
CCoord& CCoord :: operator=(const CCoord& b) {   
	this->xi = b.Xi();
	return *this;
};
CCoord CCoord :: operator+(const CCoord& b) {
	CCoord p(this->xi + b.Xi());
	return p;
};
CCoord CCoord :: operator-(const CCoord& b) {
	CCoord p(xi - b.Xi());
	return p;
};
CCoord CCoord :: operator*(const CCoord& b) {
	CCoord p(xi * b.Xi());
	return p;
};
void CCoord ::print() {//вывод координаты
	printf("%lg", xi);
};
