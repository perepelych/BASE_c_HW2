//Задание 3

#include <iostream>
#include <fstream>
#include <windows.h>

struct adress
{
    std::string country;
    std::string city;
    std::string street;
    int house_number;
    int flat;
    int index;
};

void print_structure(adress& c) {
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите страну: ";
    std::cin >> c.country;
    std::cout << "Введите город: ";
    std::cin >> c.city;
    std::cout << "Введите улицу: ";
    std::cin >> c.street;
    std::cout << "Введите номер дома: ";
    std::cin >> c.house_number;
    std::cout << "Введите номер квартиры: ";
    std::cin >> c.flat;
    std::cout << "Введите индекс: ";
    std::cin >> c.index;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    adress c1;
    print_structure(c1);
    std::cout << c1.country << " " << c1.city << " " << c1.street << " " << c1.house_number << " " << c1.flat << " " << c1.index << " " << std::endl;
    adress c2;
    print_structure(c2);
    std::cout << c2.country << " " << c2.city << " " << c2.street << " " << c2.house_number << " " << c2.flat << " " << c2.index << " " << std::endl;
}
