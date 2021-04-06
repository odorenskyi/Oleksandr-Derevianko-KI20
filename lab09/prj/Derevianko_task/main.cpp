#include <iostream>
#include <windows.h>
#include <clocale>
#include <wchar.h>
#include <fcntl.h>
#include <iomanip>
#include <io.h>
#include "..\..\..\lab08\prj\ModulesDerevianko\ModulesDerevianko.h"

using namespace std;

void localisation() {
    _wsetlocale(LC_ALL,L" ");
    _setmode(_fileno(stdout), _O_U8TEXT);
}

void function81() {
    double x;
    double y;
    double z;

    wcout << L"Уведіть x: ";
    cin >> x;
    wcout << L"Уведіть y: ";
    cin >> y;
    wcout << L"Уведіть z: ";
    cin >> z;

    wcout << L"S = " << s_calculate(x, y, z) << endl;
}

void function91() {
    int input = 0;
    wcout << L"Уведіть об'єм використиного газу за місяць: ";
    cin >> input;

    wcout << L"Сума до сплати - " << sumToPay(input) << endl;
}

void function92() {
    double input = 0;
    wcout << L"Уведіть розмір взуття у сантиметрах: ";
    cin >> input;

    double ukranian = centemetrToUkranianSize(input);
    double british = centemetrToBritishSize(input);

    if (ukranian == 0.0) {
        wcout << L"Розмір взуття в системі України – " << L"не існує" << endl;
    } else {
        wcout << L"Розмір взуття в системі України – " << ukranian << endl;
    }

    wcout << L"Розмір взуття в системі Великобританії - " << british << endl;
}

void function93() {
    int input = -1;

    do {
        wcout << L"Уведіть число: " << endl;
        cin >> input;
        if (input >= 0) {
            int d11 = 2048;
            if (input & d11) {
                wcout << L"Число двійкових нулів - " << countNumber(input) << endl;
            } else {
                wcout << L"Число двійкових одиниць - " << countNumber(input) << endl;
            }
        } else {
            wcout << L"Число повинно бути більше 0" << endl;
        }
    } while (input < 0);

}

int main()
{
    localisation();

    double result = 0;
    char input = 0;

    do {
        wcout << L"Уведіть \"u\" – для виклику функції s_calculate, \"t\" – для виклику функціїї до задачі 9.1, " << endl;
        wcout << L"\"r\" – для виклику функції до задачі 9.2 або \"e\" – для виклику функції до задачі 9.3:" << endl;
        cin >> input;

        if (input == 'u') {
            function81();

            wcout << L"Для виходу уведіть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 't') {
            function91();

            wcout << L"Для виходу уведіть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 'r') {
            function92();

            wcout << L"Для виходу уведіть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 'e') {
            function93();

            wcout << L"Для виходу уведіть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input != 'w' && input != 'i') {
            Beep(523, 500);
            wcout << L"Не вірний ввод" << endl;
        }

    } while (input != 'w' && input != 'i');

    system("pause");

    return 0;
}
