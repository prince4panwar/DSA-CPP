/*Define a function to find the greatest number in a given array.
a.  int maxValue(int A[], int size);*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void set_Array(int a[]);
void show_Array();
int maxValue(int A[], int Size);
int main()
{
    int a[5];
    set_Array(a);
    show_Array();
    cout<<maxValue(a,5);
    getch();
}
    void set_Array(int a1[])
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Enter "<<i+1<<" number :- ";
            cin>>a1[i];
        }
        for(int i=0;i<5;i++)
        {
            cout<<a1[i];
        }
    }
    int maxValue(int A[], int Size)
    {
        int maxi=A[0];
        for(int i=0;i<Size;i++)
           if(maxi<A[i])
              maxi=A[i];
        return maxi;
    }

