// Lab_02.cpp
	// Клюка Антоніна
	// Лабораторна робота № 2.
	// Лінійні програми.
	// Варіант 12
//

#include <iostream>

using namespace std;

int main()
{
	double x;
	double z1;
	double z2;

	const double PI = 3.14;

	cout << "Angle Alpha: "; cin >> x;

	z1 = sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
	z2 = cos((3 * PI / 2) - x) / sin((3 * PI / 2) - x);

	cout << endl;

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}