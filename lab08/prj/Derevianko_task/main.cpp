#include <iostream>
#include <windows.h>
#include "../ModulesDerevianko/ModulesDerevianko.h"

using namespace std;

int main()
{
    system("chcp 866 & cls");

    cout << "Розробник: Дерев'янко Олександр Сергійович © " << endl;
    cout << "Назва ЗВО: Центральноукраїнський національний технічний університет" << endl;
    cout << "Рік реалізації проекту: 2021" << endl;
    cout << "Версія: 1.0" << endl;

    double x;
    double y;
    double z;
    char a;
    char b;
    cout << "Уведіть x: " << endl;
    cin >> x;
    cout << "Уведіть y: " << endl;
    cin >> y;
    cout << "Уведіть z: " << endl;
    cin >> z;
    cout << "Уведіть a: " << endl;
    cin >> a;
    cout << "Уведіть b: " << endl;
    cin >> b;

    cout << "a + 1 == b + 2: " << boolalpha << (a + 1 == b + 2) << endl;
    cout << "x у десятковій - " << dec << x << endl;
    cout << "x у шістнадцятковій - " << hex << (int) x << endl;
    cout << "y у десятковій - " << dec << y << endl;
    cout << "y у шістнадцятковій - " << hex << (int) y << endl;
    cout << "z у десятковій - " << dec << z << endl;
    cout << "z у шістнадцятковій - " << hex << (int) z << endl;
    cout << "S = " << s_calculate(x, y, z) << endl;

    system("pause");
    return 0;
}
