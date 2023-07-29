/*You have given an /employee Class with member as described in question-1 and question-2.
Now define a non-member function function which takes an array of Employee as an argument and
return Employee  object highest salary
*/
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
       cout<<endl<<endl<<"Enter Employee id :-";
       cin>>empid;
       cout<<"Enter Employee name :- ";
       cin>>name;
       cout<<"Enter Employee salary :- ";
       cin>>salary;
    }
    void show_Employee()
    {
        cout<<endl<<"Employee id = "<<empid<<"  Name =  "<<name<<"  Salary = "<<salary;
    }
    friend Employee Highest_Employee(Employee E[]);
};
Employee Highest_Employee(Employee E[], int Size)
{
    Employee maxi=E[0];
    for(int i=0;i<Size;i++)
    {
        if(maxi.salary<E[i].salary)
            maxi=E[i];
    }
    return maxi;
}
int main()
{
    Employee e[5],O;
    for(int i=0;i<5;i++)
    {
        e[i].set_Employee();
        e[i].show_Employee();
    }
    O=Highest_Employee(e,5);
    cout<<endl<<endl<<"Highest Salary of Employee is given below :- "<<endl;
    O.show_Employee();
    getch();
}
