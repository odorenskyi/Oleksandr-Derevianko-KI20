#include <iostream>
#include <cmath>
#include <..\ModulesDerevianko\ModulesDerevianko.h>

using namespace std;

int main()
{
    double x[] = {1.0, 0.0, -1.0, 2.0, -2.0, 0.0, 0.0, 1.0, -2.0, 99.3};
    double y[] = {1.0, 0.0, -1.0, -1.0, 3.0, -2.0, 1.0, 0.0, 0.0, -99.9};
    double z[] = {1.0, 0.0, -1.0, 0.0, 0.0, 1.0, -2.0, -2.0, 1.0, -0.32};

    double expected[] ={4.1581, 0.0, -2.47515, -4.89898, 0.181444, -0.125, 1.41421, 0.0, 0.0, -0.243897};

    for (int i = 0; i < 10; i++) {
        double result = s_calculate(x[i], y[i], z[i]);
        cout << "Test case " << i << ": ";
        if (fabs(result - expected[i]) <= 0.001 * fabs(result) || (result != result && expected[i] == 0.0)) {
            cout << " passed" << endl;
        } else {
            cout << " failed" << endl;
        }
    }

    return 0;
}
