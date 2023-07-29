//Write a recursive function to print first n reverse even natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
void printEven(int n);
int main()
{
    int num;
    cout<<"Enter a number :-";
    cin>>num;
    printEven(2*num);
    getch();
}
void printEven(int n)
{
    if(n>=2)
    {
        cout<<n<<" ";
        printEven(n-2);
    }
    else
        return;

}

