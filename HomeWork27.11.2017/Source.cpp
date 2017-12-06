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
		int x, y;
		cout << "Введите x : ";
		cin >> x;
		cout << "Введите y : ";
		cin >> y;
		{
			if (x == 0 && y == 0)
			{
				cout << (x = 0)<<endl;
				cout << (y = 0) << endl;
			}

			else if (x != 0 && y == 0)
			{
				cout << 12 / x << endl;
			}
			else if (x == 0 && y != 0)
			{
				cout << 12 / y << endl;
			}
			else
			{
				cout << 144 / (x*y) << endl;
			}
		}
	}

	else if (nz == 3)
	{
		// Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y, иначе возвращает y-x
		int x, y;
		cout << "Введите x : ";
		cin >> x;
		cout << "Введите y : ";
		cin >> y;
		if (x > y)
			cout << (x - y) <<endl;
		else
			cout << (y - x) << endl;
	}

	else if (nz == 4)
	{
		//  Напишите функцию double f(double x, double y), которая возвращает x/y, если x больше y, иначе возвращает y/x. Предполагается, что значения параметров больше нуля
		float x, y;
		cout << "Введите x : ";
		cin >> x;
		cout << "Введите y : ";
		cin >> y;
		if (x>0 && y>0 && x > y)
			cout << (x / y) << endl;
		else 
			cout << (y / x) << endl;
	}

	else if (nz == 5)
	{
		// Напишите функцию double f(double x, double y, double z), которая возвращает m*n / k, где k есть меньшее из чисел 
		// x, y, z, а, m и n есть среднее и большее из этих чисел. Предполагается, что значения параметров больше нуля
		double x, y, z,a,m,n,k;
		double max, mid, min;
		cout << "Введите x : ";
		cin >> x;
		cout << "Введите y : ";
		cin >> y;
		cout << "Введите z : ";
		cin >> z;
		cout << "Введите m : ";
		cin >> m;
		cout << "Введите n : ";
		cin >> n;
		cout << "Введите k : ";
		cin >> k;
		if (k < m && k < n) { min = k; }
		if (n < m && n < k) { min = n; }
		if (m < n && m < k) { min = m; }

		if (k > m && k > n) { max = k; }
		if (n > m && n > k) { max = n; }
		if (m > n && m > k) { max = m; }

		if (m <= n && n <= k) { mid = n; }
		else { mid = n; }
		if (m <= k && k <= n) { mid = k; }
		else { mid = n; }
		k = min;
		m = mid;
		n = max;
		cout << m*n / k << endl;
	}

	else if (nz == 6)
	{
		// Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c
		int a, b, c;
		cout << "Введите a : ";
		cin >> a;
		cout << "Введите b : ";
		cin >> b;
		cout << "Введите c : ";
		cin >> c;
		if ((a < b ? (a < c ? a : c) : (b < c ? b : c)))
			cout <<"наименьшее значение" << endl;
	}
	
	else if (nz == 7)
	{
		// Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c
		int a, b, c;
		cout << "Введите a : ";
		cin >> a;
		cout << "Введите b : ";
		cin >> b;
		cout << "Введите c : ";
		cin >> c;
		if ((a < b ? (a < c ? a : c) : (b < c ? b : c)))
			cout << "наибольшее значение" << endl;
	}

	else if (nz == 8)
	{
		// Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2 + у2 = z2, иначе возвращает false
		float x, y,z ;
		cout << "Введите x : ";
		cin >> x;
		cout << "Введите y : ";
		cin >> y;
		cout << "Введите z : ";
		cin >> z;
		if (true)
		{
			cout << pow(x, 2) + pow(y, 2) + pow(z, 2) << endl;
		}
		else
		{

		}
	}

	else if (nz == 9)
	{
		// Напишите функцию bool f(int x, int y), которая возвращает true, если x делится нацело на y, или наоборот, y делится нацело на x, 
		//  иначе возвращает false. Предполагается, что значения параметров больше нуля.
		int x, y;
		cout << "Введите x : ";
		cin >> x;
		cout << "Введите y : ";
		cin >> y;
		if (x / y)
			cout <<"true" <<endl;
		else if (y / x)
			cout << "false" << endl;
	}

	else if (nz == 10)
	{
		//   Положительные числа x, y, z могут быть сторонами треугольника, если большее из них меньше суммы двух других. Напишите функцию bool f(int x, int y, int z), 
		//  которая возвращает true, если числа x, y, z могут быть сторонами треугольника, иначе возвращает false. Предполагается, что значения параметров больше нуля
		unsigned x, y, z;
		cout << "Введите x : ";
		cin >> x;
		cout << "Введите y : ";
		cin >> y;
		cout << "Введите z : ";
		cin >> z;
		if (x, y, z)
			cout << "Треугольник" << endl;
		else
			cout << "Не треугольник" << endl;
	}

	else if (nz >= 0)
	{
		cout << "Такого задания несуществует!\n";
		system("pause");
		system("cls");
	goto start;

	}
}


