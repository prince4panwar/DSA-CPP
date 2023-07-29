//Insertion Sort
#include<iostream>
#include<conio.h>
using namespace std;

void Insertion_Sort(int a[],int size)
{
    int i, j, temp;
    for(i=1;i<size;i++)
    {
        for(temp=a[i],j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    int a[]={100, 390, 400, 14, 2, 17, 700, 25, 10,1,19,21,99,7,5,4,3};

    for(int i=0;i<=16;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    Insertion_Sort(a,17);

    for(int i=0;i<=16;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    getch();
}
