#include <iostream>
#include <windows.h>
#include <clocale>
#include <wchar.h>
#include <fcntl.h>
#include <iomanip>
#include <io.h>
#include "ModulesDerevianko.h"

using namespace std;

void localisation() {
    _wsetlocale(LC_ALL,L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);
}

int main() {
    localisation();

    char input = 0;
    do {
        wcout << L"Уведiть \"u\" – для виклику функцiї задачі 10.1, \"t\" – для виклику функцiїї до задачi 10.2, " << endl;
        wcout << L"\"r\" – для виклику функцiї до задачi 10.3" << endl;
        cin >> input;

        if (input == 'u') {
            char outputFile[] = "test.txt";
            char inputFile[] = "input.txt";

            wcout << L"Уведіть назву вхідного файлу" << endl;
            cin >> inputFile;
            wcout << L"Уведіть назву вихідного файлу" << endl;
            cin >> outputFile;

            wcout << L"Починаемо роботу..." << endl;
            task101(inputFile, outputFile);
            wcout << L"Робота закінчена." << endl;

            wcout << L"Для виходу уведiть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 't') {
            char inputFile[] = "input.txt";

            wcout << L"Уведіть назву вхідного файлу" << endl;
            cin >> inputFile;

            wcout << L"Починаемо роботу..." << endl;
            task102(inputFile);
            wcout << L"Робота закінчена." << endl;

            wcout << L"Для виходу уведiть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 'r') {
            char outputFile[] = "test.txt";

            wcout << L"Уведіть назву вихідного файлу" << endl;
            cin >> outputFile;

            double x;
            double y;
            double z;
            int b;

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
            wcout << L"Уведіть b: ";
            cin >> b;

            wcout << L"Починаемо роботу..." << endl;
            task103(outputFile, x, y, z, b);
            wcout << L"Робота закінчена." << endl;

            wcout << L"Для виходу уведiть \"w\"  або \"i\":" << endl;
            cin >> input;
        } else if (input == 'e') {

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
