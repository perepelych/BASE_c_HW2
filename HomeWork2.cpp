#include <iostream>
#include <fstream>

//Задание 1



enum class seasons {
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};



int main()
{
    int a = 1;
    while (a != 0) {
        std::cout << "Введите число. Введите '0' для выхода: ";
        std::cin >> a;
        
        switch (a) {
        case 0:
            std::cout << "До свидания!";
        case 1:
            std::cout << "Январь" << std::endl;
        case 2:
            std::cout << "Февраль" << std::endl;
        case 3:
            std::cout << "Март" << std::endl;
        case 4:
            std::cout << "Апрель" << std::endl;
        case 5:
            std::cout << "Май" << std::endl;
        case 6:
            std::cout << "Июнь" << std::endl;
        case 7:
            std::cout << "Июль" << std::endl;
        case 8:
            std::cout << "Август" << std::endl;
        case 9:
            std::cout << "Сентябрь" << std::endl;
        case 10:
            std::cout << "Октябрь" << std::endl;
        case 11:
            std::cout << "Ноябрь" << std::endl;
        case 12:
            std::cout << "Декабрь" << std::endl;
        default:
            std::cout << "Неверное число!" << std::endl;
        }
    }

}



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
  std::cout << "Input country: ";
  std::cin >> c.country;
  std::cout << "Input city: ";
  std::cin >> c.city;
  std::cout << "Input street: ";
  std::cin >> c.street;
  std::cout << "Input house number: ";
  std::cin >> c.house_number;
  std::cout << "Input flat number: ";
  std::cin >> c.flat;
  std::cout << "Input index: ";
  std::cin >> c.index;
}

int main()
{
  int k = 1;
  while (k != 0){
  adress c1;
  print_structure(c1);
    std::cout << "Input '0' to quit the program ";
    std::cin >> k;
}
}

*/