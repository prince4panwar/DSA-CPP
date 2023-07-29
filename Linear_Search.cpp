#include<iostream>
#include<conio.h>
using namespace std;
int linear_search(int a[],int num,int size)
{
    int i;
    if(size<=0)
        cout<<"Invalid size"<<endl;
    else
    {
        for(i=0;i<size;i++)
        {
            if(a[i]==num)
            {
                return i;
            }
        }
        if(i==size)
            return -1;
    }
}
int main()
{
    int a[]={10, 30, 40, 4, 2, 7, 70, 25, 0};
    int pre_ab_sent;
    for(int i=0;i<=8;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    pre_ab_sent=linear_search(a,2,8);

    if(pre_ab_sent==-1)
        cout<<"Element is not present in the array"<<endl;
    else
        cout<<"Element is present at index "<<pre_ab_sent<<" in the array"<<endl;
    getch();
}

