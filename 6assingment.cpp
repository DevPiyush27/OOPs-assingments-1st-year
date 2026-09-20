#include <iostream>
using namespace std;

class student {
public:
    int rno;
    string name;
    float marks; // Added third variable

    
    student(int rno, string name, float marks) {
        this->rno = rno;
        this->name = name;
        this->marks = marks;
        cout << "Student record created!!!!" << endl;
    }


    ~student() {
        cout << "Student record deleted!!!!" << endl;
    }

    void display() {
        cout << "Roll NO : " << rno << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {
    
    student s1(101, "Rahul", 88.5);

    
    s1.display();

    return 0;
}
