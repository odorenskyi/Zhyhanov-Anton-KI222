#include <iostream>
#include <iomanip> // для использования манипуляторов форматирования
#include "ModulesZhiganov.h" // подключение заголовочного файла

using namespace std;

void ownerProd()
{
    cout << "Zhiganov Anton ";
    cout << u8"\u00A9" << endl; // выведет символ авторского права ©
}

bool result(int a, int b)
{
    return (a + 1 == b + 2);
}

void Zaw3(int x, int y, int z)
{
    // вывод значений x, y, z в десятичной и шестнадцатеричной системах счисления
    cout << "x = " << dec << x << " (dec), " << showbase << hex << x << " (hex)" << endl;
    cout << "y = " << dec << y << " (dec), " << showbase << hex << y << " (hex)" << endl;
    cout << "z = " << dec << z << " (dec), " << showbase << hex << z << " (hex)" << endl;

    // вычисление s
    double s = s_calculation(x, y, z);

    // вывод значения s с двумя знаками после запятой
    cout << "s = " << fixed << setprecision(2) << s << endl;
}

int main()
{
    int x;
    int y;
    int z;
    char a;
    char b;

    cout << "Enter number x: ";
    cin >> x;

    cout << "Enter number y: ";
    cin >> y;

    cout << "Enter number z: ";
    cin >> z;

    cout << "Enter char a: ";
    cin >> a;

    cout << "Enter char b: ";
    cin >> b;

    ownerProd(); // вызов функции ownerProd()

    bool res = result(x, y); // вызов функции result и сохранение результата в переменной res

    if (res)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    Zaw3(x, y, z); // вызов функции Zaw3()

    return 0;
}
