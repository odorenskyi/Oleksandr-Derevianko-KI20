#include <iostream>
#include "..\..\..\lab08\prj\ModulesDerevianko\ModulesDerevianko.h"

using namespace std;

int main()
{
    cout << "sumToPay function: " << endl;
    int input[] = {0, 100, 207, 208, 499, 500, 301, 53, 250, 853};
    int expected[] = {0, 129900, 268893, 371904, 892212, 1822500, 538188,  68847, 447000, 3109185};

    for (int i = 0; i < 10; i++) {
        int result = sumToPay(input[i]);
        cout << "Test case " << i << ": " << endl;
        cout << "Input: " << input[i] << ", result: " << result << ", test case result: ";
        if (result == expected[i]) {
            cout << " passed" << endl;
        } else {
            cout << " failed" << endl;
        }
    }

    cout << endl << "centemetrToUkranianSize function: " << endl;
    double sizes[] = {20.5, 21.0, 21.5, 22.0, 22.5, 23.0, 23.5, 24.0, 24.5, 25.0, 25.5, 26.0, 26.5, 27.0, 27.5, 28.0, 28.5, 29.0, 29.5, 30.0, 30.5, 31.0, 31.5, 32.0};
    double expectedRes[] =  {0.0, 0.0, 0.0, 0.0, 0.0, 35.0, 36.0, 36.5, 37.0, 38.0, 39.0, 40.5, 41.0, 41.5, 42.0, 43.0, 43.0, 44.0, 45.0, 46.0, 47.0, 47.5, 48.0, 48.5};

    for (int i = 0; i < 24; i++) {
        double result = centemetrToUkranianSize(sizes[i]);
        cout << "Test case " << i << ": " << endl;
        cout << "Input: " << sizes[i] << ", result: " << result << ", test case result: ";
        if (result == expectedRes[i]) {
            cout << " passed" << endl;
        } else {
            cout << " failed" << endl;
        }
    }

    cout << endl << "centemetrToBritishSize function: " << endl;
    double sizes2[] = {20.5, 21.0, 21.5, 22.0, 22.5, 23.0, 23.5, 24.0, 24.5, 25.0, 25.5, 26.0, 26.5, 27.0, 27.5, 28.0, 28.5, 29.0, 29.5, 30.0, 30.5, 31.0, 31.5, 32.0};
    double expectedRes2[] =  {1.0, 1.5, 2.0, 2.5, 3.0, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.5, 8.0, 8.5, 9.0, 9.5, 10.0, 11.0, 11.5, 12.0, 12.5, 13.0, 14.0, 14.5};

    for (int i = 0; i < 24; i++) {
        double result = centemetrToBritishSize(sizes2[i]);
        cout << "Test case " << i << ": " << endl;
        cout << "Input: " << sizes2[i] << ", result: " << result << ", test case result: ";
        if (result == expectedRes2[i]) {
            cout << " passed" << endl;
        } else {
            cout << " failed" << endl;
        }
    }

    cout << endl << "countNumber function: " << endl;
    int numbers[] = {0, 2, 9, 32, 100, 128, 548, 1200, 9999, 21359009};
    int results[] = {0, 1, 2, 1, 3, 1, 3, 28, 24, 12};

    for (int i = 0; i < 10; i++) {
        int result = countNumber(numbers[i]);
        cout << "Test case " << i << ": " << endl;
        cout << "Input: " << numbers[i] << ", result: " << result << ", test case result: ";
        if (result == results[i]) {
            cout << " passed" << endl;
        } else {
            cout << " failed" << endl;
        }
    }

    system("pause");

    return 0;
}
