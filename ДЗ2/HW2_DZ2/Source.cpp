//������� 2

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
    std::cout << "������� ����� �����: ";
    std::cin >> s.balance;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    schet acc;
    std::cout << "������� ����� �����: ";
    std::cin >> acc.account;
    std::cout << "������� ��� ���������: ";
    std::cin >> acc.name;
    std::cout << "������� ������: ";
    std::cin >> acc.balance;
    rase_balance(acc);
    std::cout << "����� ������: " << acc.balance;
}