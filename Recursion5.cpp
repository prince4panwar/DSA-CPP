//Write a recursive function to print first n odd natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
void printEven(int n);
int main()
{
    int num;
    cout<<"Enter a number :-";
    cin>>num;
    printEven(2*num-1);
    getch();
}
void printEven(int n)
{
    if(n>=1)
        printEven(n-2);
    else
        return;
    cout<<n<<" ";
}
