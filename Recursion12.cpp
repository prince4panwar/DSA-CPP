//Write a recursive function to print binary equivalent of a given decimal number
#include<iostream>
#include<conio.h>
using namespace std;
void printBinary(int n);
int main()
{
    int num;
    cout<<"Enter a number :- ";
    cin>>num;
    cout<<"Sum of square of first "<<num<<" natural numbers is "<<printBinary(num);
    getch();
}
void printBinary(int n)
{
    if(n==0)
        return;
    cout<<
    printBinary(n-1);
}

