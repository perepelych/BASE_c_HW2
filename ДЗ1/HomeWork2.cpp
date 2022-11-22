#include <iostream>
#include <fstream>
#include <windows.h>

//Задание 1

enum class Months {
    Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int a1 = 1;
    do {
        std::cout << "Введите номер месяца. Введите '0' для выхода: ";
        std::cin >> a1;
        Months a = static_cast<Months>(a1);

        switch (a) {
        case Months::Jan:
            std::cout << "Январь" << std::endl; break;
        case Months::Feb:
            std::cout << "Февраль" << std::endl; break;
        case Months::Mar:
            std::cout << "Март" << std::endl; break;
        case Months::Apr:
            std::cout << "Апрель" << std::endl; break;
        case Months::May:
            std::cout << "Май" << std::endl; break;
        case Months::Jun:
            std::cout << "Июнь" << std::endl; break;
        case Months::Jul:
            std::cout << "Июль" << std::endl; break;
        case Months::Aug:
            std::cout << "Август" << std::endl; break;
        case Months::Sep:
            std::cout << "Сентябрь" << std::endl; break;
        case Months::Oct:
            std::cout << "Октябрь" << std::endl; break;
        case Months::Nov:
            std::cout << "Ноябрь" << std::endl; break;
        case Months::Dec:
            std::cout << "Декабрь" << std::endl; break;
        }
    } 
    while (a1 > 0 && a1 < 13);

    if (a1 > 12 || a1 < 0) {
        std::cout << "Неверное число!";
    }
    if (a1 == 0) {
        std::cout << "До свидания!";
        return 0;
    }
}