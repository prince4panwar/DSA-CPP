//In Employee class (question 1), define setter and getter
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee
{
private:
    int empid;
    char name[20];
    float salary;
public:
    void set_Employee()
    {
       cout<<"Enter Employee id :-";
       cin>>empid;
       cout<<"Enter Employee name :- ";
       cin>>name;
       cout<<"Enter Employee salary :- ";
       cin>>salary;
    }
    void show_Employee()
    {
        cout<<"Employee id = "<<empid<<"  Name =  "<<name<<"  Salary = "<<salary;
    }
};
int main()
{
    Employee e1;
    e1.set_Employee();
    e1.show_Employee();

    getch();
}
