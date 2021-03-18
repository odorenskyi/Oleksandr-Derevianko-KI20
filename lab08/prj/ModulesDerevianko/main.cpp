#include <iostream>
#include <cmath>

using namespace std;

double s_calculate(double x, double y, double z) {
    if (y == 0.0) return nan("");
    return z * sin(pow(x, 2) * y) + (sqrt(abs(z - 12 * x))) / pow(y, 3);
}
