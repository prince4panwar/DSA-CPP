/*Define a function to find the greatest number in a given array.
            a.  int maxValue(int A[], int size);*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int maxValue(int A[], int size);
int maxValue(int A[], int size)
{
    int maxi=A[0];
    for(int i=0;i<size;i++)
    if(A[i]>maxi)
        maxi=A[i];
    return maxi;
}
int main()
{
    int a[5],maxi;
    cout<<"Enter 5 numbers :- "<<endl;
    for(int i=0;i<5;i++)
        cin>>a[i];
    maxi=maxValue(a,5);
    cout<<"\nMaximum number is :- "<<maxi;
    getch();
}
