//Задание 2

#include <iostream>
#include <fstream>
#include <windows.h>

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