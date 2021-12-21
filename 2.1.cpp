#include <iostream>
using namespace std;

int main()
{
	float a, b, c, max;
	setlocale(LC_ALL, "ru");
	cout << "Введите три числа";
	cin >> a >> b >> c;
	if (a > b)
		max = a;
	else
		max = b;
	if (c > max)
		max = c;
	cout << max;
	return 0;
}


