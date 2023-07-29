#include<iostream>
#include<conio.h>
using namespace std;
void Selection_Sort(int a[],int size);
void Selection_Sort(int a[],int size)
{
    int i, r, min, temp;
    for(r=0;r<size-1;r++)
    {
        for(min=r,i=r;i<size;i++)
        {
            if(a[i]<a[min])
                min=i;
        }
            temp=a[r];
            a[r]=a[min];
            a[min]=temp;
    }
}
/*int findMinValue(int A[],int j,int n)
{
    int min=A[j], minIndex;
    for(minIndex=j;j<=n-1;j++)
    {
        if(A[j]<min)
        {
            min=A[j];
            minIndex=j;
        }
    }
    return minIndex;
}
void selection_sort(int A[],int n)
{
    int t,minIndex,i;
    for(i=0;i<=n-2;i++)
    {
        minIndex=findMinValue(A,i,n);
        t=A[i];
        A[i]=A[minIndex];
        A[minIndex]=t;
    }
}*/
int main()
{
    int a[]={22, 300, 519, 1,101,41,16,81,29,11};

    for(int i=0;i<=9;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    Selection_Sort(a,10);

    for(int i=0;i<=9;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    getch();
}

