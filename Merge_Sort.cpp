#include<iostream>
#include<conio.h>
using namespace std;
void merge(int a[],int first, int mid, int last)
{
    int i,j,k,*b;
    i=first;
    j=mid+1;
    k=first;
    b=new int[last+1];

    while(i<=mid&&j<=last)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=last)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(i=first;i<=last;i++)
    {
        a[i]=b[i];
    }
}
void merge_sort(int a[],int first, int last)
{
    int mid;
    mid=(first+last)/2;
    if(first<last)
    {
        merge_sort(a,first,mid);
        merge_sort(a,mid+1,last);
        merge(a,first,mid,last);
    }
}
int main()
{
    int a[]={10, 30, 40, 4, 2, 7, 70, 25, 0};

    for(int i=0;i<=8;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    merge_sort(a,0,8);

    for(int i=0;i<=8;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    getch();
}
