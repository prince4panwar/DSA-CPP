//Write a recursive function to calculate sum of first n natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
int sumN(int n);
int main()
{
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    cout<<"Sum of first "<<num<<" natural numbers is "<<sumN(num);
    getch();
}
int sum=0;
int sumN(int n)
{
    if(n==0)
        return sum;
    sum=sum+n;
    sumN(n-1);
}

