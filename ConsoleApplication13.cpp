#include <iostream>
using namespace std;
int main()
{
    float a, b;
    setlocale(LC_ALL, "ru");
    cout << "Введите два числа(делимое и делитель)";
    cin >> a >> b;
        if (b == 0)
    {
        cout << "на ноль делить нельзя, введите другой делитель";
        cin >> b;
    }
    cout << a / b;
}


