#include <iostream>
#include <cmath>
#include <fstream>
#include <wchar.h>
#include <random>
#include <chrono>
#include <codecvt>
#include <locale>
#include <bitset>

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

void task101(char *inputFile, char *outputFile) {
    string originalText = "Як парость виноградної лози, плекайте мову.\n"
                          "Пильно й ненастанно політь бур'ян.\n"
                          "Чистіша від сльози вона хай буде.\n"
                          "Вірно і слухняно незай вона щоразу служить вам,\n"
                          "Хоч і живе своїм живим життям.";


    fstream appendFileToWorkWith;
    appendFileToWorkWith.open(outputFile, std::fstream::in | std::fstream::out | std::fstream::trunc);
    string s = "Розробник: Дерев'янко О.С.\nУстанова: ЦНТУ\nМісто: Кропивницький\nКраїна: Україна\nРік розробки: 2021";

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> distribution(10,100);

    s = s + "\nРандомне число: " + to_string(distribution(generator));

    fstream newfile;
    newfile.open(inputFile,ios::in); //open a file to perform read operation using file object

    string fromFile;
    if (newfile.is_open()) {   //checking whether the file is open
        string tp;
        while (!newfile.eof()) {
            getline(newfile, tp);
            fromFile += tp + "\n";
        }
        newfile.close();   //close the file object.
    }

    bool result = true;
    for (int i = 0; i < originalText.length(); i++) {
        if (fromFile[i] != originalText[i]) {
            result = false;
        }
    }

    s += result ? "\nТекст у вхідному не має пуктуаційних помилок" : "\nТекст у вхідному файлі має пунктуаційні помилки";

    appendFileToWorkWith << s;
    appendFileToWorkWith.close();
}

void task102(char inputFile[]) {
    ofstream outfile;
    outfile.open(inputFile, std::ios_base::app); // append instead of overwrite
    time_t t = time(0);
    char *date = ctime(&t);
    string time = date;
    string alphabet = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";

    if (outfile.is_open()) {
        outfile << endl << time << alphabet << endl;
        outfile.close();
    }
}

void task103(char outputFile[], double x, double y, double z, int b) {
    fstream appendFileToWorkWith;
    appendFileToWorkWith.open(outputFile, std::fstream::in | std::fstream::out | std::fstream::app);
    string s;

    s += "\ns_calculation: " + to_string(s_calculate(x, y, z));
    s += "\nb у бінарній формі: ";

    appendFileToWorkWith << s;
    appendFileToWorkWith << bitset<32>(b);
    appendFileToWorkWith.close();
}
