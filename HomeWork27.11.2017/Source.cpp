#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
start:
	int nz = 0;
	cout << "������� ����� ������� : ";
	cin >> nz;
	system("cls");
	if (nz == 1)
	{
		// ���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d. ��������� ������� q � ������� r ��� �������, � �� d
		int a, d;
		cout << "������� ����� a : ";
		cin >> a;
		cout << "������� ����� d : ";
		cin >> d;
		cout << "������� q = " << a / d << "\n";
		cout << "������� �� ������� r = " << a%d << "\n";
		system("pause");
		system("cls");
		goto start;
	}

	else if (nz == 2)
	{
		//   �������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� ����� ����, 12 / x, 
		// ���� y ����� 0, 12 / y, ���� x ����� 0, ����� 144 / (x*y)
		int f(int x, int y);
		int x, y;
		
		
	}
	else if (nz >= 0)
	{
		cout << "������ ������� ������������!\n";
		system("pause");
		system("cls");
		goto start;

	}
}


