#include <iostream>
#include <cmath>

using namespace std;

double s_calculate(double x, double y, double z) {
    if (y == 0.0) return nan("");
    return z * sin(pow(x, 2) * y) + (sqrt(abs(z - 12 * x))) / pow(y, 3);
}

int sumToPay(int input) {
    if (input < 208) {
        return input * 1299;
    } else if (input >= 208 && input < 500) {
        int partialResult = (input - 208) * 1788;
        return (208 * 1299) + partialResult;
    } else {
        int partialResult = (input - 500) * 3645;

        return (208 * 1299) + (296 * 1788) + partialResult;
    }
}

double centemetrToUkranianSize(double input) {
    if (input <= 22.5) {
        return 0.0;
    } else if (input > 22.5 && input <= 23.0) {
        return 35.0;
    } else if (input > 23.0 && input <= 23.5) {
        return 36.0;
    } else if (input > 23.5 && input <= 24.0) {
        return 36.5;
    } else if (input > 24.0 && input <= 24.5) {
        return 37.0;
    } else if (input > 24.5 && input <= 25.0) {
        return 38.0;
    } else if (input > 25.0 && input <= 25.5) {
        return 39.0;
    } else if (input > 25.5 && input <= 26.0) {
        return 40.5;
    } else if (input > 26.0 && input <= 26.5) {
        return 41.0;
    } else if (input > 26.5 && input <= 27.0) {
        return 41.5;
    } else if (input > 27.0 && input <= 27.5) {
        return 42.0;
    } else if (input > 27.5 && input <= 28.5) {
        return 43.0;
    } else if (input > 28.5 && input <= 29.0) {
        return 44.0;
    } else if (input > 29.0 && input <= 29.5) {
        return 45.0;
    } else if (input > 29.5 && input <= 30.0) {
        return 46.0;
    } else if (input > 30.0 && input <= 30.5) {
        return 47.0;
    } else if (input > 30.5 && input <= 31.0) {
        return 47.5;
    } else if (input > 31.0 && input <= 31.5) {
        return 48.0;
    } else if (input > 31.5) {
        return 48.5;
    } else {
        return 0.0;
    }
}

double centemetrToBritishSize(double input) {
    if (input <= 20.5) {
        return 1.0;
    } else if (input > 20.5 && input <= 21.0) {
        return 1.5;
    } else if (input > 21.0 && input <= 21.5) {
        return 2.0;
    } else if (input > 21.5 && input <= 22.0) {
        return 2.5;
    } else if (input > 22.0 && input <= 22.5) {
        return 3.0;
    } else if (input > 22.5 && input <= 23.0) {
        return 4.0;
    } else if (input > 23.0 && input <= 23.5) {
        return 4.5;
    } else if (input > 23.5 && input <= 24.0) {
        return 5.0;
    } else if (input > 24.0 && input <= 24.5) {
        return 5.5;
    } else if (input > 24.5 && input <= 25.0) {
        return 6.0;
    } else if (input > 25.0 && input <= 25.5) {
        return 6.5;
    } else if (input > 25.5 && input <= 26.0) {
        return 7.5;
    } else if (input > 26.0 && input <= 26.5) {
        return 8.0;
    } else if (input > 26.5 && input <= 27.0) {
        return 8.5;
    } else if (input > 27.0 && input <= 27.5) {
        return 9.0;
    } else if (input > 27.5 && input <= 28.0) {
        return 9.5;
    } else if (input > 28.0 && input <= 28.5) {
        return 10.0;
    } else if (input > 28.5 && input <= 29.0) {
        return 11.0;
    } else if (input > 29.0 && input <= 29.5) {
        return 11.5;
    } else if (input > 29.5 && input <= 30.0) {
        return 12.0;
    } else if (input > 30.0 && input <= 30.5) {
        return 12.5;
    } else if (input > 30.5 && input <= 31.0) {
        return 13.0;
    } else if (input > 31.0 && input <= 31.5) {
        return 14.0;
    } else if (input > 31.5) {
        return 14.5;
    } else {
        return 0.0;
    }
}

int countNumber(int number) {
    int original = number;
    int mask = 1;
    int mask_2 = 1;

    int BinOne = 0;
    int BinZero = 0;

    do {
        if (number % 2 == 0) {
            BinZero++;
        } else {
            BinOne++;
        }
        number /= 2;
    } while (number != 0);

    if(!(original & 1024)){
        return BinZero;
    }else{
        return BinOne;
    }
}
