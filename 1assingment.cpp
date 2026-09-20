#include <iostream>
#include <string>
using namespace std;

class books {
public:
    float price;
    int total_pages;
    int year;
    string name;

    void pricedisplay() {
        cout << "the price of book is = " << price << endl;
    }

    void total_page_display() {
        cout << "the total pages of book are = " << total_pages << endl;
    }

    void year_release() {
        cout << "the year of publication is = " << year << endl;
    }

    void name_book() {
        cout << "Name of the book is = " << name << endl;
    }
};

int main() {
    books b1;

    cout << "enter the number of total pages: " << endl;
    cin >> b1.total_pages;

    cout << "enter the name of the book: " << endl;
    cin.ignore();
    getline(cin, b1.name);

    cout << "enter the price of the book: " << endl;
    cin >> b1.price;

    cout << "enter the year of publication: " << endl;
    cin >> b1.year;

    cout << "========Book Details========" << endl;

    b1.total_page_display();
    b1.name_book();
    b1.pricedisplay();
    b1.year_release();

    return 0;
}
