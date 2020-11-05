//Условие
/*14. Определить класс CVector для работы с вектором вещественных
чисел. Длина вектора задается с помощью оператора #define. В классе
должны быть определены необходимые конструкторы, операторы сложения, вычитания, скалярного умножения.
В отдельном файле должен быть написан тест на данный класс.*/
/*Команда для компиляции: 
g++ 1_Z14.cpp -o 1_Z14.exe
Команда для открытия:
1_Z14.exe*/
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
};


void AutoTest(void) {//из файла AutoTest.cpp
	CVector vect1, vect2, vect3;
	CCoord mass1[LENGTH];
	CCoord mass2[LENGTH];
	CCoord p;
	CCoord a(2);
	CCoord b(3);
	CCoord c(5);
	CCoord d(7);
	mass1[0] = a; mass2[0] = c;
	mass1[1] = b; mass2[1] = d; 
	vect1 = mass1;
	vect2 = mass2;
	p = vect1 * vect2;
	if(p.Xi() == 31)
		cout << "AutoTest passed..." << endl;
	else
		cout << "AutoTest failed!!!" << endl;
};

CVector input() {//из файла input.cpp
	double xi;
	CCoord mass[LENGTH];
	for (int i = 0; i < LENGTH; i++) {
		cout << "Vvedite vectornuy koordinatu nomer_" << i + 1 << "_(chislo):\t";
		cin >> xi;
		CCoord p(xi);
		mass[i] = p;

	}
	CVector vect(mass);
	cout << "Polychen vector";
	vect.print();
	cout << endl;
return vect;
};

void Calc(void) {//из файла Calc.cpp
	CVector vect1, vect2, vect3;
	CCoord a;
	vect1 = input();
	vect2 = input();
	cout << "\n" << endl;
	cout << "\n" << endl;
	cout << "\n" << endl;
	cout << "\n" << endl;
	cout << "\nANS:\n" << endl;
	cout << "x+y = ";
	vect3 = vect1 + vect2;
	vect3.print();
	vect3 = vect1 - vect2;
	cout << "\nx-y = ";
	vect3.print();
	a = vect1 * vect2;
	cout << "\n<(x,y)> = ";
	a.print();
	cout << "\nSUCSESS!\n" << endl;
};

int main(void) {//из файла main.cpp
AutoTest();
cout << "\n" << endl;
Calc();
return 0;
};
