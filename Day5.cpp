#include <iostream>
using namespace std;

struct Man
{
    char name[40];
    int age;
    float salary;
   
};                          //struct basic code;

int main()
{
    Man m1;

    cout << "Enter Full name: ";
    cin>>m1.name;
    cout << "Enter age: ";
    cin >> m1.age;
    cout << "Enter salary: ";
    cin >> m1.salary;
    

    cout << "Displaying Information." << endl;
    cout <<"Name : " << m1.name << endl;
    cout <<"Age : " << m1.age << endl;
    cout << "Salary : " << m1.salary;
   

    return 0;
}

