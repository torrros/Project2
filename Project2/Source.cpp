// Lab_0.2.cpp
// ����� ��������� 
// ���������� ������ �2
// ˳��� �������� 
// ������ 17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m;  //������� ��������
	double n;  //������� ��������
	double z1; //��������� ���������� ������� ������ 
	double z2; //��������� ���������� ������� ������
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	z1 = (sqrt((3 * m + 2) * (3 * m + 2) - 24 * m)) / (3 * sqrt(m) - 2 / sqrt(m));
	z2 = sqrt(n);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cout << "���� 1.2";
}
