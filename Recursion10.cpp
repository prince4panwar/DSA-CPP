//Write a recursive function to calculate sum of square of first n natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
int sumSquareN(int n);
int main()
{
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    cout<<"Sum of square of first "<<num<<" natural numbers is "<<sumSquareN(num);
    getch();
}
int sum=0;
int sumSquareN(int n)
{
    if(n==0)
        return sum;
    sum=sum+n*n;
    sumSquareN(n-1);
}
