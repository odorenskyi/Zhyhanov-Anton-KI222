#include <iostream>
#include <cmath>

using namespace std;

int main ()

 {

    double x;
    double y;
    double z;
    double s;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Enter z: ";
    cin >> z;

    s = z * sin((x * x) * y) + ((sqrt(abs(z - 12 * x))) / (pow(y, 3)));

    cout << "s = " << s << endl;

 }
