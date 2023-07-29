/*Define a function to find the sum of element of all element of a given array.
            a. int sum(int a[], int size);*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int sum(int A[], int size);
int sum(int A[], int size)
{
    int total=0;
    for(int i=0;i<size;i++)
    total=total+A[i];
    return total;
}
int main()
{
    int a[5],Sum;
    cout<<"Enter 5 numbers :- "<<endl;
    for(int i=0;i<5;i++)
        cin>>a[i];
    Sum=sum(a,5);
    cout<<"\nAverage of 5 number is :- "<<Sum;
    getch();
}


