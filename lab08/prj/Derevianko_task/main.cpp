#include <iostream>
#include <windows.h>
#include <clocale>
#include <wchar.h>
#include <fcntl.h>
#include <iomanip>
#include <io.h>
#include "../ModulesDerevianko/ModulesDerevianko.h"

using namespace std;

void localisation() {
    _wsetlocale(LC_ALL,L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);
}

int main()
{
    localisation();

    wcout << (L" Дерев'янко Олександр Сергiйович. ЦНТУ. 2021 рiк. ©") << endl;

    double x;
    double y;
    double z;
    char a;
    char b;

    wcout << L"Уведiть x: ";
    cin >> x;
    wcout << L"Уведiть y: ";
    cin >> y;
    wcout << L"Уведiть z: ";
    cin >> z;
    wcout << L"Уведiть a: ";
    cin >> a;
    wcout << L"Уведiть b: ";
    cin >> b;

    wcout << L"a + 1 == b + 2: " << boolalpha << (a + 1 == b + 2) << endl;
    wcout << L"x у десятковiй системi =" << dec << x << endl;
    wcout << L"x у шiстнадцятковiй системi = " << hex << (int) x << endl;
    wcout << L"y у десятковiй системi = " << dec << y << endl;
    wcout << L"y у шiстнадцятковiй системi = " << hex << (int) y << endl;
    wcout << L"z у десятковiй системi = " << dec << z << endl;
    wcout << L"z у шiстнадцятковiй системi =  " << hex << (int) z << endl;

    if (y == 0.0) {
        wcout << L"Дiлення на 0" << endl;
    } else {
        wcout << L"S = " << s_calculate(x, y, z) << endl;
    }

    system("pause");
    return 0;
}
