#include "h.h"

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
