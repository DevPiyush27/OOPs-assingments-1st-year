#include<iostream>
using namespace std;


class employee{

    public:
        string department;
        long id;
        double salary;

    void getDetails(){
            
            cout<<"===Entre employee info==="<<endl;
            cout<<"enter employee DEpartment"<< endl;
            getline (cin, department);
            cout<<"entre employee id"<< endl;
            cin>>id;
            cout<<"entre salary"<<endl;
            cin>>salary;
            
    }
    

    void display(){
            cout<<"====info of employee ===="<<endl;
            cout<< "the department of employee is " << department << endl;
            cout << "salary of employee is "<< salary<<endl;
            cout << "ID of employee is"<< id<<endl;

    }
    
};
int main(){

    employee e1;
    e1.getDetails();
    e1.display();
    employee e2;
    cout<<"======entre info of 2nd employeee======"<<endl;
    e2.getDetails();
    e2.display();
    
    return 0;
};