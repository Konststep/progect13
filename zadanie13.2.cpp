#include <clocale>
#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

struct Person
{
    long long int schet;
    string name;
    double balans;
};

void newbal(Person* ptr, double a) {
    ptr->balans = a;
}

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double new_balans = 0;
    Person P1;
    Person* ptr = &P1;
    cout << "Введите номер счёта: ";
    cin >> P1.schet;
    cout << "Введите имя владельца: ";
    cin >> P1.name;
    cout << "Введите баланс: ";
    cin >> P1.balans;
    cout << "Введите новый баланс: ";
    cin >> new_balans;

    newbal(ptr, new_balans);

    cout << "Ваш счёт: " << P1.name << " " << P1.schet << " " << P1.balans << endl;

    return EXIT_SUCCESS;
}