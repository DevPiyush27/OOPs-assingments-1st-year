#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    //  Default constructor 
    Book() {
        title = "Love hypothesis";
        author = "Ali Hazelwood ";
        price = 800;
    }

    //  Parameterized constructor 
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void show() {
        cout << title << " Book by " << author << " - $" << price << endl;
    }
};

int main() {
    //  book with default values
    
    Book b1;
    
    // book with full details
    
    Book b2("Harry Potter", "J.K. Rowling", 15.99);


    cout << "Default Book: "<<endl;
    b1.show();
    cout << "added book: " << endl;
    b2.show();

    return 0;
}