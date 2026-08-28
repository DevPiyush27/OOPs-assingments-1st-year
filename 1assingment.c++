#include <iostream>
#include <string>

class books {
public:
    float price;
    int total_pages;
    int year;
    std::string name;

    void pricedisplay() {
        std::cout << "the price of book is = " << price << std::endl;
    }

    void total_page_display() {
        std::cout << "the total pages of book are = " << total_pages << std::endl;
    }

    void year_release() {
        std::cout << "the year of publication is = " << year << std::endl;
    }

    void name_book() {
        std::cout << "Name of the book is = " << name << std::endl;
    }
};

int main() {
    books b1;

    std::cout << "enter the number of total pages: " << std::endl;
    std::cin >> b1.total_pages;

    std::cout << "enter the name of the book: " << std::endl;
    std::cin.ignore(); 

    std::getline(std::cin, b1.name);

    std::cout << "enter the price of the book: " << std::endl;
    std::cin >> b1.price;

    std::cout << "enter the year of publication: " << std::endl;
    std::cin >> b1.year;


    std::cout<< "========Book Details========" << std::endl;

    b1.total_page_display();

    b1.name_book();
    b1.pricedisplay();
    b1.year_release();

    return 0;
}