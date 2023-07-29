#include<iostream>
#include<conio.h>
using namespace std;
int quick(int a[], int left, int right)
{
    int loc, t;
    loc=left;

    while(left<right)
    {
        while(left<right&&a[loc]<=a[right])
            right--;
        if(left==right)
        {
            break;
        }
        else
        {
            t=a[loc];
            a[loc]=a[right];
            a[right]=t;
            loc=right;
        }
        while(left<right&&a[loc]>=a[left])
            left++;
        if(left==right)
        {
            break;
        }
        else
        {
            t=a[loc];
            a[loc]=a[left];
            a[left]=t;
            loc=left;
        }
    }
    return loc;
}
void quick_sort(int a[], int l, int u)
{
    int loc;
    loc=quick(a,l,u);
    if(l+1<loc)
        quick_sort(a,l,loc-1);
    if(loc<u-1)
        quick_sort(a,loc+1,u);
}
int main()
{
    int a[]={10, 30, 40, 4, 2, 7, 70, 25, 0};

    for(int i=0;i<=8;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    quick_sort(a,0,8);

    for(int i=0;i<=8;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    getch();
}
