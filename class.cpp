#include<iostream>
using namespace std;

// Class -> It is just like structure. It is user defined data type
// Syntax of Class
// class class_name{

// };

class student{
    public:
    int roll;
    string name;
    int standard;
    int salary;

    void print_data(){
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<salary<<endl;
    cout<<standard<<endl;
    }
};

int main(){
    // Creating Object Of class
    // Class_name object_name;
    student sagar;
    sagar.name = "Sagar";
    sagar.salary = 100000;
    sagar.standard = 5;
    sagar.roll = 456;

    // Print the data of Sagar
    sagar.print_data();
    

    student gautam;
    gautam.name = "Gautam";
    gautam.salary = 1000;
    gautam.roll = 345;
    gautam.standard = 7;
    gautam.print_data();

student vikash
vikash.name ="vikash";
vikash.salary ="1250;
vikash.roll =154;
vikash.standard =4;
vikash.print dada();






    return 0;
}