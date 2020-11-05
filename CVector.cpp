#include "h.h"

CVector& CVector :: operator= (const CVector& b) {//из файла CVector.cpp
	for (int i = 0; i < LENGTH; i++) {
		this->a[i] = b.a[i];
	}
	return *this;                               
};
CVector CVector :: operator+(const CVector& b) {
	CVector p;
	for (int i = 0; i < LENGTH; i++) {
		p.a[i] = a[i] + b.a[i];
	}
	return p;
};
CVector CVector :: operator-(const CVector& b) {
	CVector p;
	for (int i = 0; i < LENGTH; i++) {
		p.a[i] = a[i] - b.a[i];
	}
	return p;
};
CCoord CVector :: operator*(CVector& b) {
	CCoord p;
	for (int i = 0; i < LENGTH; i++) {
		p = p + this->a[i] * b.a[i];
	}
	return p;
};
void CVector :: print() {//выводит вектор со значениями
	CCoord p; cout << "(";
	for (int i = 0; i < LENGTH - 1; i++) {
		p = a[i];
		p.print();
		cout << ",";
	}
	p = a[LENGTH - 1];
	p.print();cout << ")";
