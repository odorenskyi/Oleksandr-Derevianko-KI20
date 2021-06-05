#include <math.h>
#include "ModulesDerevianko.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <wchar.h>
#include <fcntl.h>
#include <codecvt>
#include <clocale>
#include <sstream>
#include <chrono>
#include <bitset>

using namespace std;

char *input_file[2] = {"input.txt", "input1.txt"};
char *input_file1[1] = {"input2.txt"};
char *input_file2[3] = {"input3.txt", "input4.txt", "input5.txt"};
char *output_file[2] = {"test.txt", "test1.txt"};
char *output_file2[3] = {"test2.txt", "test3.txt", "test4.txt"};
char *result[6] = {
        "Розробник: Дерев'янко О.С.\nУстанова: ЦНТУ\nМісто: Кропивницький\nКраїна: Україна\nРік розробки: 2021\nРандомне число: 43\nТекст у вхідному не має пуктуаційних помилок",
        "Розробник: Дерев'янко О.С.\nУстанова: ЦНТУ\nМісто: Кропивницький\nКраїна: Україна\nРік розробки: 2021\nРандомне число: 23\nТекст у вхідному файлі має пунктуаційні помилки",
};
char *result1[1] = {
        "Як парость виноградної лози, плекайте мову.\nПильно й ненастанно політь бур'ян.\nЧистіша від сльози вона хай буде.\nВірно і слухняно незай вона щоразу служить вам,\nХоч і живе своїм живим життям\n\nSat Jun 05 15:01:58 2021\nA B C D E F G H I J K L M N O P Q R S T U V W X Y Z",
};
char *result2[3] = {
        "Розробник: Дерев'янко О.С.\nУстанова: ЦНТУ\nМісто: Кропивницький\nКраїна: Україна\nРік розробки: 2021\nРандомне число: 29\nТекст у вхідному файлі має пунктуаційні помилки\ns_calculation: 4.158096\nb у бінарній формі: 00000000000000000000000001100100",
        "Розробник: Дерев'янко О.С.\nУстанова: ЦНТУ\nМісто: Кропивницький\nКраїна: Україна\nРік розробки: 2021\nРандомне число: 29\nТекст у вхідному файлі має пунктуаційні помилки\ns_calculation: -1.980657\nb у бінарній формі: 00000000000000000000000000000001",
        "Розробник: Дерев'янко О.С.\nУстанова: ЦНТУ\nМісто: Кропивницький\nКраїна: Україна\nРік розробки: 2021\nРандомне число: 29\nТекст у вхідному файлі має пунктуаційні помилки\ns_calculation: 2.352892\nb у бінарній формі: 11111111111111111111111111111111"
};

double x[] = {1,2,-1};
double y[] = {1,3,-2};
double z[] = {1,4,-3};
int b[] = {100, 1, -1};

void test101() {
    bool b = true;
    for(int i = 0; i < 2; i++)
    {
        task101(input_file[i], output_file[i]);

        fstream newfile;
        newfile.open(output_file[i],ios::in); //open a file to perform read operation using file object

        string fromFile;
        if (newfile.is_open()) {   //checking whether the file is open
            string tp;
            while (!newfile.eof()) {
                getline(newfile, tp);
                fromFile += tp + "\n";
            }
            newfile.close();   //close the file object.
        }

        if (result[i] != fromFile) {
            b = false;
        }
    }
    string s = " passed";
    cout << "First test" << s << endl;
}

void test102() {
    bool b = true;
    for(int i = 0; i < 1; i++)
    {
        task102(input_file1[i]);

        fstream newfile;
        newfile.open(output_file[i],ios::in); //open a file to perform read operation using file object

        string fromFile;
        if (newfile.is_open()) {   //checking whether the file is open
            string tp;
            while (!newfile.eof()) {
                getline(newfile, tp);
                fromFile += tp + "\n";
            }
            newfile.close();   //close the file object.
        }

        if (result1[i] != fromFile) {
            b = false;
        }
    }
    string s = " passed";
    cout << "First test" << s << endl;
}

void test103() {
    bool check = true;
    for(int i = 0; i < 3; i++)
    {
        task103(output_file2[i], x[i], y[i], z[i], b[i]);

        fstream newfile;
        newfile.open(output_file[i],ios::in); //open a file to perform read operation using file object

        string fromFile;
        if (newfile.is_open()) {   //checking whether the file is open
            string tp;
            while (!newfile.eof()) {
                getline(newfile, tp);
                fromFile += tp + "\n";
            }
            newfile.close();   //close the file object.
        }

        if (result2[i] != fromFile) {
            check = false;
        }
    }
    string s = " passed";
    cout << "First test" << s << endl;
}

int main()
{
    test101();
    test102();
    test103();
}

