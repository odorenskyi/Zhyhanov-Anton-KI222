#include <cmath>

double s_calculation(int x, int y, int z) {

    double s = static_cast<double>(x + y) / (pow(z, 2) + exp(x));

    return s;
}

