#include "h.h"

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
