#include <clocale>
#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

enum mes
{
    nool,
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 1;
    
    while (a != 0)
    {        
        cout << "Введите номер месяца:";
        cin >> a;
        mes num = static_cast<mes>(a);
        
        if (num == 0) { cout << "До свидания" << endl; return 0; }

        switch (num)
        {
        case January: cout << "Январь" << endl; break;
        case February: cout << "Февраль" << endl; break;
        case March: cout << "Март" << endl; break;
        case April: cout << "Апрель" << endl; break;
        case May: cout << "Май" << endl; break;
        case June: cout << "Июнь" << endl; break;
        case July: cout << "Июль" << endl; break;
        case August: cout << "Август" << endl; break;
        case September: cout << "Сентябрь" << endl; break;
        case October: cout << "Октябрь" << endl; break;
        case November: cout << "Ноябрь" << endl; break;
        case December: cout << "Декабрь" << endl; break;
        default: cout << "Неправильный номер!" << endl; break;
        }
    }


    return EXIT_SUCCESS;
}