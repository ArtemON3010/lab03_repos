// Lab_03_4.cpp
// Турко Артем
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 22
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуженн в повній формі
	if ((y <= sqrt((R * R) - (x * x)) && x <= 0 && 0 <= y) ||
		(y <= 0 && y >= -2 * x && y >= 2 * (x - R)))
		cout << "yes" << endl;
	else
		cout << "no" << endl; cin.get();
	return 0;
}
