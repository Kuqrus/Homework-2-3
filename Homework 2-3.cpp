#include <iostream>
#include <windows.h>

struct adress
{
    std::string city;
    std::string street;
    int building;
    int apartment;
    int zipcode;
};

void createAdress(struct adress&name) {
    std::cout << "Введите город: ";
    std::cin >> name.city;
    std::cout << "Введите улицу: ";
    std::cin >> name.street;
    std::cout << "Введите номер дома: ";
    std::cin >> name.building;
    std::cout << "Введите номер квартиры: ";
    std::cin >> name.apartment;
    std::cout << "Введите почтовый индекс: ";
    std::cin >> name.zipcode;
}

void printAdress(struct adress name) {
    std::cout << "Город: " << name.city;
    std::cout << "\nУлица: " << name.street;
    std::cout << "\nНомер дома: " << name.building;
    std::cout << "\nНомер квартиры: " << name.apartment;
    std::cout << "\nПочтовый индекс: " << name.zipcode;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    adress myAdress;    


    createAdress(myAdress);

    printAdress(myAdress);
}
