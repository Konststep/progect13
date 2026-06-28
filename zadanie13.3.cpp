#include <clocale>
#include <string>
#include <Windows.h>
#include <iostream>

using namespace std;

struct Person
{
    string city;
    string street;
    int house;
    int apartment;
    int index;
};

void print (Person& P){
    cout << "Город: " << P.city << endl;
    cout << "Улица: " << P.street << endl;
    cout << "Номер дома: " << P.house << endl;
    cout << "Номер квартиры: " << P.apartment << endl;
    cout << "Индекс: " << P.index << endl;
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Person P1 = { .city = "Москва", .street = "Арбат", .house = 12, .apartment = 8, .index = 123456 };
    Person P2 = { .city = "Ижевск", .street = "Пушкина", .house = 59, .apartment = 143, .index = 953769 };
    
    print(P1);
    print(P2);

    return EXIT_SUCCESS;
}