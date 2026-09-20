#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    int rollNo;
    double marks;

    //parameterized constructoR

    void setDetails(string name, int age, int rollNo, double marks) {
    
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
        this->marks = marks;
    }

    void show() {
        cout << "Student record:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setDetails("Rahul", 19, 101, 88.5);
    s.show();

    return 0;
}
