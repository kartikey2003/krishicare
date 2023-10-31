#include<iostream>
using namespace std;
class Employee{
    private:
    int id; // Data member
    string name;
    public:
    Employee(int id1,string name1){ // member function
        id = id1;
        name = name1;
    }
    void print_data(){
        cout<<"The name of Employee is : ";
        cout<<name<<endl;
        cout<<"The id of the Employee is : ";
        cout<<id<<endl;
    }
};
int main(){

    Employee e(456,"Employee1");
    // e.set_data(456,"Employee1");

    e.print_data();

 return 0;   
}


// Constructor
/*
It is a member function of the class.

it Has same name as of Class Name

It has No return Type

It is automatically Executed when object is created
*/