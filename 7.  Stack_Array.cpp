#include<iostream>
#include<conio.h>
using namespace std;
class Stack_Array
{
private:
    int capacity;
    int top;
    int *ptr;
public:
    Stack_Array(){capacity=0;}
    void create_stack(int a);
    void push(int data);
    void pop();
    void peek();
    bool isFull();
    bool isEmpty();
};
void Stack_Array::create_stack(int cap)
{
    capacity=cap;
    top=-1;
    if(capacity<=0)
        cout<<"Invalid Input";
    else
        ptr=new int[capacity];
}
bool Stack_Array::isFull()
{
    return top==capacity-1;
}
bool Stack_Array::isEmpty()
{
    return top==-1;
}
void Stack_Array::push(int data)
{
    if(top+1==capacity)
        cout<<"Stack overflow"<<endl;
    else
    {
        top++;
        ptr[top]=data;
    }
}
void Stack_Array::pop()
{
    if(top<0)
        cout<<"Stack is empty"<<endl;
    else
    {

        int *temp=new int[capacity];
        for(int i=0;i<top;i++)
        temp[i]=ptr[i];
        top--;
        delete ptr;
        ptr=temp;
    }
}
void Stack_Array::peek()
{
    if(top==-1)
        cout<<"Stack is empty"<<endl;
    else
        cout<<ptr[top];
}
int main()
{
    Stack_Array s;
    s.create_stack(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.peek();

    getch();
}
