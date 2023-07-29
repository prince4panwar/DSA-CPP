//Write a recursive function to calculate sum of digits of a given number
#include<iostream>
#include<conio.h>
using namespace std;
int sumDigits(int n);
int main()
{
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    cout<<"Sum of digits is "<<sumDigits(num);
    getch();
}
int sum=0;
int sumDigits(int n)
{
    if(n==0)
        return sum;
    sum=sum+n%10;
    sumDigits(n/10);
}
