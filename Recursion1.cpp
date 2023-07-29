//Write a recursive function to print first n natural numbers.
#include<iostream>
#include<conio.h>
using namespace std;
void print(int n);
int main()
{
    int num;
    cout<<"Enter a number :-";
    cin>>num;
    print(num);
    getch();
}
void print(int n)
{
    if(n>0)
        print(n-1);
    else
        return;
    cout<<n<<" ";
}
