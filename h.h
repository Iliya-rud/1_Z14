#pragma once
#include <iostream>
#include <string>
#define LENGTH 3 // ЭТО РАЗМЕРНОСТЬ ВЕКТОРНОГО ПРОСТРАНСТВА. ЕЁ МОЖНО МЕНЯТЬ НА ЛЮБОЕ НАТУРАЛЬНОЕ ЧИСЛО
using namespace std;

class CCoord {
private:
	double xi;
public:
	CCoord() {
		xi = 0;
	};
	CCoord(double xi) {
		this->xi = xi;
	};
	double Xi() const;//определили не приватную функцию
	CCoord operator+(const CCoord& b);
	CCoord operator-(const CCoord& b);
	CCoord operator*(const CCoord& b);
	CCoord& operator=(const CCoord& b);
	void print();
};

class CVector {
private:
	CCoord a[LENGTH];
public:
	CVector() {
		for (int i = 0; i < LENGTH; i++) {
			CCoord p;
			a[i] = p;
		};
	}
	CVector(const CCoord *b) {
		for (int i = 0; i < LENGTH; i++) {
			a[i] = b[i];
		}
	};
	CVector& operator=(const CVector& b);
	CVector operator+(const CVector& b);
	CVector operator-(const CVector& b);
	CCoord operator*(CVector& b);
	void print();
};

CVector input(void);
void Calc(void);
void AutoTest(void);
