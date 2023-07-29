#include<iostream>
#include<conio.h>
using namespace std;
void T_O_H(int n,char beg,char aux,char end)
{
    if(n>0)
    {
        T_O_H(n-1,beg,end,aux);
        cout<<beg<<"->"<<end<<endl;
        T_O_H(n-1,aux,beg,end);
    }
}
int main()
{
    T_O_H(2,'A','B','C');
    getch();
}
