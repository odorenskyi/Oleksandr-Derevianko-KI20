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
    _wsetlocale(LC_ALL,L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);
}

void function81() {
    double x;
    double y;
    double z;

    wcout << L"Уведiть x: ";
    cin >> x;
    do {
        wcout << L"Уведiть y: ";
        cin >> y;

        if (y == 0) {
            wcout << L"Y повинно бути бiльше 0" << endl;
        }
    } while (y == 0);
    wcout << L"Уведiть z: ";
    cin >> z;

    wcout << L"S = " << s_calculate(x, y, z) << endl;
}

void function91() {
    int input = 0;
    wcout << L"Уведiть об'єм використиного газу за мiсяць: ";
    cin >> input;

    wcout << L"Сума до сплати - " << sumToPay(input) << endl;
}

void function92() {
    double input = 0;
    wcout << L"Уведiть розмiр взуття у сантиметрах: ";
    cin >> input;

    double ukranian = centemetrToUkranianSize(input);
    double british = centemetrToBritishSize(input);

    if (ukranian == 0.0) {
        wcout << L"Розмiр взуття в системi України – " << L"не iснує" << endl;
    } else {
        wcout << L"Розмiр взуття в системi України – " << ukranian << endl;
    }

    wcout << L"Розмiр взуття в системi Великобританiї - " << british << endl;
}

void function93() {
    int input = -1;

    do {
        wcout << L"Уведiть число: " << endl;
        cin >> input;
        if (input >= 0) {
            int d11 = 2048;
            if (input & d11) {
                wcout << L"Число двiйкових нулiв - " << countNumber(input) << endl;
            } else {
                wcout << L"Число двiйкових одиниць - " << countNumber(input) << endl;
            }
        } else {
            wcout << L"Число повинно бути бiльше 0" << endl;
        }
    } while (input < 0);

}

int main()
{
    localisation();

    double result = 0;
    char input = 0;

    do {
        wcout << L"Уведiть \"u\" – для виклику функцiї s_calculate, \"t\" – для виклику функцiїї до задачi 9.1, " << endl;
        wcout << L"\"r\" – для виклику функцiї до задачi 9.2 або \"e\" – для виклику функцiї до задачi 9.3:" << endl;
        cin >> input;

        if (input == 'u') {
            function81();

            wcout << L"Для виходу уведiть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 't') {
            function91();

            wcout << L"Для виходу уведiть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 'r') {
            function92();

            wcout << L"Для виходу уведiть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 'e') {
            function93();

            wcout << L"Для виходу уведiть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input != 'w' && input != 'i') {
            Beep(523, 500);
            wcout << L"Не вiрний ввод" << endl;
        }

    } while (input != 'w' && input != 'i');

    system("pause");

    return 0;
}
