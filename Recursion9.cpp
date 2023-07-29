//Write a recursive function to calculate sum of first n odd natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
int sumOdd(int n);
int main()
{
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    cout<<"Sum of first "<<num<<" odd natural numbers is "<<sumOdd(2*num-1);
    getch();
}
int sum=0;
int sumOdd(int n)
{
    if(n==-1)
        return sum;
    sum=sum+n;
    sumOdd(n-2);
}



