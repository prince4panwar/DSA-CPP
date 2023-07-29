//Write a recursive function to print first n natural numbers in reverse order
#include<iostream>
#include<conio.h>
using namespace std;
void printReverse(int n);
int main()
{
    int num;
    cout<<"Enter a number :-";
    cin>>num;
    printReverse(num);
    getch();
}
void printReverse(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        printReverse(n-1);
    }
    else
        return;
}
