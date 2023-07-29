/*Define a class Employee with private instance member variables empid, name, salary.
Also define instance member functions setEmployee() and showEmployee()*/
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
    void setEmployee(int id, char nam[], float salar)
    {
        empid=id;
        strcpy(name,nam);
        salary=salar;
    }
    void showEmployee()
    {
        cout<<"Employee id = "<<empid<<"  Name =  "<<name<<"  Salary = "<<salary;
    }
};
int main()
{
    Employee e1;
    e1.setEmployee(1,"Prince",50000.0);
    e1.showEmployee();
    getch();
}

