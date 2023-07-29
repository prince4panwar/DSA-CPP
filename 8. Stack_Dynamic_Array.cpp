#include<iostream>
#include<conio.h>
using namespace std;
class Stack_Dynamic_Array
{
private:
    int capacity;
    int top;
    int *ptr;
public:
    Stack_Dynamic_Array(){capacity=0; lastIndex=-1;}
    void create_stack(int a);
    void push(int data);
    void pop();
    void peek();
    void double_Stack();
    void half_Stack();
};
void Stack_Dynamic_Array::create_stack(int cap)
{
    capacity=cap;
    if(capacity<=0)
        cout<<"Invalid Input"<<endl;
    else
        ptr=new int[capacity];
}
void Stack_Dynamic_Array::double_Stack()
{
    capacity=2*capacity;
    int *temp=new int[capacity];
    for(int i=0;i<=top;i++)
       temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
}
void Stack_Dynamic_Array::push(int data)
{
    if(top+1==capacity)
    {
       double_Stack();
    }
    top++;
    ptr[top]=data;
}
void Stack_Dynamic_Array::half_Stack()
{
    capacity=capacity/2;
    int *temp=new int[capacity];
    for(int i=0;i<=top;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
}
void Stack_Dynamic_Array::pop()
{
    if(top<0)
        cout<<"Stack is empty"<<endl;
    else
    {
        if(top+1==capacity/2)
        {
            half_Stack();
        }
        else
        {
            int *temp=new int[lastIndex];
            for(int i=0;i<lastIndex;i++)
                temp[i]=ptr[i];
            delete []ptr;
            ptr=temp;
        }
         top--;
    }
}
void Stack_Dynamic_Array::peek()
{
    if(top<0)
        cout<<"Stack is empty";
    else
    {
        cout<<ptr[top]<<endl;
    }
}
int main()
{
    Stack_Dynamic_Array s1;
    s1.create_stack(1);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.peek();
    getch();
}
