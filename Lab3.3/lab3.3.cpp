// lab3.3.cpp
// Верхутін Даніїл
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 3


#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x;
	double y;
	double R;

	double Pi = 4 * atan(1.); // число Пі

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -7 - R) // умова 1
		y = R;
	else // умова 2
		if (x > -7 - R && x <= -7 + R)
			y = R - sqrt(R * R - pow((x + 8), 2));
		else // умова 3
			if (x > -7 + R && x <= -4)
				y = R;
			else // умова 4
				if (x > -4 && x <= 0)
					y = R - ((R * (x + 4)) / 4);
				else // умова 5
					if (x > 0 && x <= Pi)
						y = sin(x);
					else // // умова 6
						y = x - Pi;

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}