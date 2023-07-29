/*Define a function to find the average of element of a given array.
            a. int avg(int a[], int size);*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int avg(int A[], int size);
int avg(int A[], int size)
{
    int total=0;
    for(int i=0;i<size;i++)
    total=total+A[i];
    return total/size;
}
int main()
{
    int a[5],Avg;
    cout<<"Enter 5 numbers :- "<<endl;
    for(int i=0;i<5;i++)
        cin>>a[i];
    Avg=avg(a,5);
    cout<<"\nAverage of 5 number is :- "<<Avg;
    getch();
}

