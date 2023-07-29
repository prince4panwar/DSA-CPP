//Implementation of queue by using linked list
#include<iostream>
#include<conio.h>
using namespace std;
class Queue_Linked_List
{
private:
    struct node
    {
        int item;
        node *next;
    };
    node *front;
    node *rear;
public:
    Queue_Linked_List(){front=NULL;rear=NULL;}
    void push(int data);
    void pop();
    void queue_front();
    void queue_rear();
};
void Queue_Linked_List::push(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(front==NULL)
       front=n;
    else
       rear->next=n;
    rear=n;
}
void Queue_Linked_List::pop()
{
    if(front==NULL)
        cout<<"Queue is empty"<<endl;
    else if(front==rear)
    {
        delete front;
        front=rear=NULL;
    }
    else
    {
        node *t=front;
        front=front->next;
        delete t;
    }
}
void Queue_Linked_List::queue_front()
{
    if(front==NULL)
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Front element of the queue is "<<front->item<<endl;
}
void Queue_Linked_List::queue_rear()
{
    if(front==NULL)
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Rear element of the queue is "<<rear->item<<endl;
}
int main()
{
    Queue_Linked_List ql;
    ql.push(10);
    ql.push(20);
    ql.push(30);
    ql.push(40);
    ql.pop();
    ql.pop();
    ql.push(50);

    ql.queue_front();
    ql.queue_rear();

    getch();
}

