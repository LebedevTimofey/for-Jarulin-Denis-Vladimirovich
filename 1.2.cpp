#include <iostream>
using namespace std;
int main()
{
	int s, i, n;
	s = 0;
	setlocale(LC_ALL, "ru");
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s = s + i;
	}
	cout << s;
	return 0;
}
