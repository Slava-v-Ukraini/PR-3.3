// Lab_03_3.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ������ ����
	if (x <= -2)
		y = x + 3;
	else
		if (-2 < x && x <= 4)
			y = ((-R * -1) / 6) * x - ((R - 2) / 3);
		else
			if (4 < x && x <= 8 - R)
				y = -R;
			else
				if (8 - R < x && x <= 8 + R)
					y = sqrt(-(R * R - (x - 8) * (x + 8) - R));
				else
					y = -R;

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}