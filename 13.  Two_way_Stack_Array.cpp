//Two way Stack by using Array;
#include<iostream>
#include<conio.h>
using namespace std;
class Two_way_Stack
{
private:
    int capacity;
    int top1,top2;
    int *ptr;
public:
    Two_way_Stack(){capacity=0;top1=top2=-1;ptr=NULL;}
    void create_Stack(int cap);
    void push_1(int data);
    void push_2(int data);
    void pop_1();
    void pop_2();
    void top1_stack();
    void top2_stack();
};
void Two_way_Stack::create_Stack(int cap)
{
    if(ptr==NULL)
    {
        if(cap==0)
        {
            cout<<"Invalid Input"<<endl;
        }
        else
        {
            capacity=cap;
            top2=capacity;
            ptr=new int[capacity];
        }
    }
    else
    {
        cout<<"Stack is already created"<<endl;
    }
}
void Two_way_Stack::push_1(int data)
{
    if(ptr!=NULL)
    {
        if(top1==top2-1)
            cout<<"Stack1 overflow"<<endl;
        else
        {
            top1++;
            ptr[top1]=data;
        }
    }
    else
        cout<<"Stack is not created"<<endl;
}
void Two_way_Stack::push_2(int data)
{
    if(ptr!=NULL)
    {
        if(top1==top2-1)
            cout<<"Stack overflow"<<endl;
        else
        {
            top2--;
            ptr[top2]=data;
        }
    }
    else
        cout<<"Stack2 is not created"<<endl;
}
void Two_way_Stack::pop_1()
{
    if(ptr!=NULL)
    {
        if(top1>=0)
            top1--;
        else
            cout<<"Stack1 Underflow"<<endl;
    }
    else
        cout<<"Stack is not created"<<endl;
}
void Two_way_Stack::pop_2()
{
    if(ptr!=NULL)
    {
        if(top2<=capacity)
            top2++;
        else
            cout<<"Stack2 Underflow"<<endl;
    }
    else
        cout<<"Stack is not created"<<endl;
}
void Two_way_Stack::top1_stack()
{
    if(ptr!=NULL)
    {
        cout<<"Top element of stack1 :- "<<ptr[top1]<<endl;
    }
    else
        cout<<"Stack is not created"<<endl;
}
void Two_way_Stack::top2_stack()
{
    if(ptr!=NULL)
    {
        cout<<"Top element of stack2 :- "<<ptr[top2]<<endl;
    }
    else
        cout<<"Stack is not created"<<endl;
}
int main()
{
    Two_way_Stack s;
    s.create_Stack(0);
    s.push_1(10);
    s.push_1(20);
    s.push_1(30);
    s.push_2(40);
    s.push_2(50);

    s.top1_stack();
    s.top2_stack();

    getch();
}

