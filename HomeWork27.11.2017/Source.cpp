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
	cout << "Введите номер задания : ";
	cin >> nz;
	system("cls");
	if (nz == 1)
	{
		// Дано натуральное (целое неотрицательное) число, а и целое положительное число d. Вычислить частное q и остаток r при делении, а на d
		int a, d;
		cout << "Введите число a : ";
		cin >> a;
		cout << "Введите число d : ";
		cin >> d;
		cout << "Частное q = " << a / d << "\n";
		cout << "Остаток от деления r = " << a%d << "\n";
		system("pause");
		system("cls");
		goto start;
	}

	else if (nz == 2)
	{
		//   Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба равны нулю, 12 / x, 
		// если y равен 0, 12 / y, если x равен 0, иначе 144 / (x*y)
		int f(int x, int y);
		int x, y;
		
		
	}
	else if (nz >= 0)
	{
		cout << "Такого задания несуществует!\n";
		system("pause");
		system("cls");
		goto start;

	}
}


