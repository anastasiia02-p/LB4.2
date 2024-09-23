#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;

	

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;


	A = ((2 + x) / (x * x));

	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = x * x * x - 2 * x * x * x * x + 1;
	if (0 <= x && x <= 2)
		B = (fabs(x) + exp(x)) * (fabs(x) + exp(x)) * (fabs(x) + exp(x));
	if (x > 2)
		B = 4 * cos(x * x - 2);
	y = A + 1 + B;


	cin.get();
	cout << "|" << setw(7) << setprecision(2) << x
		<< " |" << setw(10) << setprecision(3) << y
		<< " |" << endl;
	x += dx;

	cout << "---------------------------" << endl;
	return 0;
}
