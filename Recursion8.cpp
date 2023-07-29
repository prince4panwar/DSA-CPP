//Write a function to calculate sum of first n even natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
int sumEven(int n);
int main()
{
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    cout<<"Sum of first "<<num<<" even natural numbers is "<<sumEven(2*num);
    getch();
}
int sum=0;
int sumEven(int n)
{
    if(n==0)
        return sum;
    sum=sum+n;
    sumEven(n-2);
}


