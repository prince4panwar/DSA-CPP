#include<iostream>
#include<conio.h>
using namespace std;
void modifed_bubble_sort(int a[],int size);
void modifed_bubble_sort(int a[],int size)
{
    int i,round,temp,flag=1;
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i<size-round;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=0;
            }
        }
        if(flag==1)
            break;
    }
}
int main()
{
    int a[]={2, 3, 4, 40, 200, 700, 7000, 25000, 300000, 1};
    for(int i=0;i<=9;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    modifed_bubble_sort(a,10);
    for(int i=0;i<=9;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
