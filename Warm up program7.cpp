/*Define a function which returns an address of dynamically created array
whose size is determined as a sum of sizes of two given array.
Also store two given arrays. Also store the values of two given arrays in newly created array*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int* dynamically(int a[],int size_a,int b[],int size_b);
int* dynamically(int a[],int size_a,int b[],int size_b)
{
    int *p, size, r=0;;
    size=size_a+size_b;
    cout<<endl<<"The size of dynamically created array is "<<size<<endl<<endl;
    p=new int[size];
    for(int i=0;i<size_a;i++)
        p[i]=a[i];
    for(size_a;size_a<size;size_a++)
        {
            p[size_a]=b[r];
            r++;
        }
    return p;
}
int main()
{
    int *ptr, A[3], B[3];
    cout<<"Enter 6 number :- "<<endl;
    for(int i=0;i<3;i++)
        cin>>A[i];
    for(int i=0;i<3;i++)
        cin>>B[i];
    ptr=dynamically(A,3,B,3);
    cout<<"Elements of new array :- "<<endl;
    for(int i=0;i<6;i++)
        cout<<ptr[i]<<" ";
        getch();
}

