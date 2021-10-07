// Lab_0.2.cpp
// Торос Владислав 
// Лаборотрна робота №2
// Лінійні програми 
// Варіант 17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m;  //вхідний параметр
	double n;  //вхідний параметр
	double z1; //результат обчислення першого виразу 
	double z2; //результат обчислення другого виразу
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	z1 = (sqrt((3 * m + 2) * (3 * m + 2) - 24 * m)) / (3 * sqrt(m) - 2 / sqrt(m));
	z2 = sqrt(n);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cout << "Зміна 1.2";
}
