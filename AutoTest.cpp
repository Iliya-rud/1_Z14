#include "h.h"

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
