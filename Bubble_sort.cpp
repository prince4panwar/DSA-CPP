#include<iostream>
#include<conio.h>
using namespace std;
void bubble_sort(int a[],int size);
void bubble_sort(int a[],int size)
{
    int i,round,temp;
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i<size-round;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
int main()
{
    int a[]={10, 30, 40, 4, 2, 7, 70, 25, 0};
    for(int i=0;i<9;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    bubble_sort(a,9);
    for(int i=0;i<9;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
