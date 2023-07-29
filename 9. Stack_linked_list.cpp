#include<iostream>
#include<conio.h>
using namespace std;
class Stack_Linked_List
{
private:
    struct node
    {
        node *next;
        int item;
    };
    //node *start;
    node *top;
public:
    Stack_Linked_List(){/*start=NULL;*/ top=NULL;}
    void push(int data);
    void pop();
    void peek();
};
/*void Stack_Linked_List::push(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
       start=n;
    else
       top->next=n;
    top=n;
}*/
void Stack_Linked_List::push(int data)
{
    node *n=new node;
    n->item=data;
    if(top==NULL)
    {
        n->next=NULL;
    }
    else
    {
        n->next=top;
    }
    top=n;
}
/*void Stack_Linked_List::push(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
       start=n;
    else
    {
        node *t=start;
        while(t->next!=NULL)
            t=t->next;
        n->next=t->next;
        t->next=n;
    }
}*/

void Stack_Linked_List::pop()
{
    if(top==NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        node *t=top;
        if(t->next==NULL)
        {
            delete t;
            top=NULL;
        }
        else
        {
            top=t->next;
            delete t;
        }
    }
}
/*void Stack_Linked_List::pop()
{
    if(start==NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        node *t1,*t2;
        t1=start;
        t2=NULL;
        while(t1->next!=NULL)
            {
                t2=t1;
                t1=t1->next;
            }
            if(t2==NULL)
                start=t1->next;
            else
                t2->next=t1->next;
            delete t1;
    }
}*/
/*void Stack_Linked_List::pop()
{
    if(start==NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        node *t=start;
        if(t->next==NULL)
        {
            delete top;
            start=NULL;
        }
        else
        {
            while(t->next->next!=NULL)
               t=t->next;

            t->next=top->next;
            delete top;
            top=t;
        }
    }
}*/
void Stack_Linked_List::peek()
{
    if(top==NULL)
        cout<<"Stack is empty"<<endl;
    else
       cout<<top->item<<endl;
}
 /*Stack_Linked_List::peek()
{
    if(start==NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        node *t=start;
        while(t->next!=NULL)
            t=t->next;
        cout<<t->item<<endl;
    }
}*/
/*void Stack_Linked_List::peek()
{
    if(start==NULL)
        cout<<"Stack is empty"<<endl;
    else
       cout<<top->item<<endl;
}*/
int main()
{
    Stack_Linked_List s;
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(20);
    s.push(10);
    s.push(9990);


    s.peek();

    getch();
}
