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
		int x, y;
		cout << "������� x : ";
		cin >> x;
		cout << "������� y : ";
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
		// �������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x
		int x, y;
		cout << "������� x : ";
		cin >> x;
		cout << "������� y : ";
		cin >> y;
		if (x > y)
			cout << (x - y) <<endl;
		else
			cout << (y - x) << endl;
	}

	else if (nz == 4)
	{
		//  �������� ������� double f(double x, double y), ������� ���������� x/y, ���� x ������ y, ����� ���������� y/x. ��������������, ��� �������� ���������� ������ ����
		float x, y;
		cout << "������� x : ";
		cin >> x;
		cout << "������� y : ";
		cin >> y;
		if (x>0 && y>0 && x > y)
			cout << (x / y) << endl;
		else 
			cout << (y / x) << endl;
	}

	else if (nz == 5)
	{
		// �������� ������� double f(double x, double y, double z), ������� ���������� m*n / k, ��� k ���� ������� �� ����� 
		// x, y, z, �, m � n ���� ������� � ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ����
		double x, y, z,a,m,n,k;
		double max, mid, min;
		cout << "������� x : ";
		cin >> x;
		cout << "������� y : ";
		cin >> y;
		cout << "������� z : ";
		cin >> z;
		cout << "������� m : ";
		cin >> m;
		cout << "������� n : ";
		cin >> n;
		cout << "������� k : ";
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
		// �������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c
		int a, b, c;
		cout << "������� a : ";
		cin >> a;
		cout << "������� b : ";
		cin >> b;
		cout << "������� c : ";
		cin >> c;
		if ((a < b ? (a < c ? a : c) : (b < c ? b : c)))
			cout <<"���������� ��������" << endl;
	}
	
	else if (nz == 7)
	{
		// �������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c
		int a, b, c;
		cout << "������� a : ";
		cin >> a;
		cout << "������� b : ";
		cin >> b;
		cout << "������� c : ";
		cin >> c;
		if ((a < b ? (a < c ? a : c) : (b < c ? b : c)))
			cout << "���������� ��������" << endl;
	}

	else if (nz == 8)
	{
		// �������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2 + �2 = z2, ����� ���������� false
		float x, y,z ;
		cout << "������� x : ";
		cin >> x;
		cout << "������� y : ";
		cin >> y;
		cout << "������� z : ";
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
		// �������� ������� bool f(int x, int y), ������� ���������� true, ���� x ������� ������ �� y, ��� ��������, y ������� ������ �� x, 
		//  ����� ���������� false. ��������������, ��� �������� ���������� ������ ����.
		int x, y;
		cout << "������� x : ";
		cin >> x;
		cout << "������� y : ";
		cin >> y;
		if (x / y)
			cout <<"true" <<endl;
		else if (y / x)
			cout << "false" << endl;
	}

	else if (nz == 10)
	{
		//   ������������� ����� x, y, z ����� ���� ��������� ������������, ���� ������� �� ��� ������ ����� ���� ������. �������� ������� bool f(int x, int y, int z), 
		//  ������� ���������� true, ���� ����� x, y, z ����� ���� ��������� ������������, ����� ���������� false. ��������������, ��� �������� ���������� ������ ����
		unsigned x, y, z;
		cout << "������� x : ";
		cin >> x;
		cout << "������� y : ";
		cin >> y;
		cout << "������� z : ";
		cin >> z;
		if (x, y, z)
			cout << "�����������" << endl;
		else
			cout << "�� �����������" << endl;
	}

	else if (nz >= 0)
	{
		cout << "������ ������� ������������!\n";
		system("pause");
		system("cls");
	goto start;

	}
}


