#include <iostream>
#include <fstream>
#include <windows.h>

//Задание 1

/*

enum class seasons {
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};



int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 1;
    while (a != 0) {
        std::cout << "Введите число. Введите '0' для выхода: ";
        std::cin >> a;
        
        switch (a) {
        case 0:
            std::cout << "До свидания!"; break;
        case 1:
            std::cout << "Январь" << std::endl; break;
        case 2:
            std::cout << "Февраль" << std::endl; break;
        case 3:
            std::cout << "Март" << std::endl; break;
        case 4:
            std::cout << "Апрель" << std::endl; break;
        case 5:
            std::cout << "Май" << std::endl; break;
        case 6:
            std::cout << "Июнь" << std::endl; break;
        case 7:
            std::cout << "Июль" << std::endl; break;
        case 8:
            std::cout << "Август" << std::endl; break;
        case 9:
            std::cout << "Сентябрь" << std::endl; break;
        case 10:
            std::cout << "Октябрь" << std::endl; break;
        case 11:
            std::cout << "Ноябрь" << std::endl; break;
        case 12:
            std::cout << "Декабрь" << std::endl; break;
        default:
            std::cout << "Неверное число!" << std::endl;
        }
    }

}

*/

//Задание 2

/*

struct schet
{
    int account;
    std::string name;
    double balance;
};
void rase_balance(schet& s) {
    std::cout << "Введите новый банас: ";
    std::cin >> s.balance;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    schet acc;
    std::cout << "Введите номер счета: ";
    std::cin >> acc.account;
    std::cout << "Введите имя владельца: ";
    std::cin >> acc.name;
    std::cout << "Введите баланс: ";
    std::cin >> acc.balance;
    rase_balance(acc);
    std::cout << "Новый баланс: " << acc.balance;
}

*/

//Задание 3

/*

struct adress
{
  std::string country;
  std::string city;
  std::string street;
  int house_number;
  int flat;
  int index;
};

void print_structure (adress& c){
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
  int k = 1;
  while (k != 0){
  adress c1;
  print_structure(c1);
    std::cout << "Введите '0' для выхода из программы/Любая кнопка для повторения: ";
    std::cin >> k;
}
}

*/