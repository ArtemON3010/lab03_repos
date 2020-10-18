// lab_03_3.cpp
// Турко Артем
// Лабораторна робота №3.3
// Розгалуження, задане графіком функції
// Варіант 22

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -8)
		y = -R;
	else
		if (-8 < x && x <= -R)
			y = (R * R + R * x) / 8 - R;
		else
			if (-R < x && x <= R)
				y = -sqrt(R * R - x * x);
			else
				if (R < x && x < 5)
					y = (2 * (x - R)) / (5 - R);
				else
					if (x != 5)
					y = 3;
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}