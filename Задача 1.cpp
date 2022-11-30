//Программа для нахождения корней квадратного уравнения по заданным коэффициентам a, b, c
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, x1, x2, d;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << x1 << endl;
		cout << x2;
	}
	if (d == 0)
	{
		x1 = -(b / 2 * a);
		cout << x1;
	}
	if (d < 0)
	{
		cout << "Нет решений";
	}

}