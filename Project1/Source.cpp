// Lab_03_1.cpp
// Торос Владислав
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 17

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
    A = x * x + 1;
	// спосіб 1: розгалуження в скороченій формі
	if (x < 4)
		B = (4 * (x * x * x * x * x * x * x) - (x * x * x * x * x) + (x * x * x) - 2);
	if (4 <= x < 7)
		B = (atan(abs(x) + 1) / 2) + 8, 3 * x;
	if (x >= 7)
		B = log(2 * x + exp(4 * x + 1));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	cout << "x = "; cin >> x;
	A = x * x + 1;
	if (x < 4)
		B = (4 * (x * x * x * x * x * x * x) - (x * x * x * x * x) + (x * x * x) - 2);
	else
	{
		if (4 <= x < 7)
			B = (atan(abs(x) + 1) / 2) + 8, 3 * x;
	}
	if (x >= 7)
	{
B = log(2 * x + exp(4 * x + 1));
	}
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}