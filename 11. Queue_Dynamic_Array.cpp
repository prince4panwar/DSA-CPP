#include<iostream>
#include<conio.h>
using namespace std;
class Queue_Array
{
private:
    int capacity;
    int front;
    int rear;
    int *ptr;
public:
    Queue_Array(){ptr=NULL;capacity=0;rear=-1;front=-1;}
    void create_Queue(int cap);
    void push(int data);
    void pop();
    void queue_front();
    void queue_back();
    void double_Queue();
    void half_Queue();
};
void Queue_Array::create_Queue(int cap)
{
    if(ptr==NULL)
    {
        if(cap<=0)
            cout<<"Invalid input"<<endl;
        else
        {
            capacity=cap;
            ptr=new int[capacity];
        }
    }
}
void Queue_Array::double_Queue()
{
    capacity=2*capacity;
    int *temp=new int[capacity];
    for(int i=front;i<=rear;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
}
void Queue_Array::push(int data)
{
    if(ptr!=NULL)
    {
        if(front==0&&rear+1==capacity||rear+1==front)
        {
            double_Queue();
            rear++;
            ptr[rear]=data;
        }
        else if(rear==-1)
        {
            front=rear=0;
            ptr[rear]=data;
        }
        else if(rear==capacity-1)
        {
            rear=0;
            ptr[rear]=data;
        }
        else
        {
            rear++;
            ptr[rear]=data;
        }
    }
}
void Queue_Array::pop()
{
    capacity=capacity
}
void Queue_Array::pop()
{
   if(ptr!=NULL)
   {
        if(front==-1&&rear==-1)
            cout<<"Queue is empty";

        else if(rear==capacity/2)
        {
            half_Queue();
            rear--;
        }
        else if(front==0&&rear==0||front==rear)
            front=rear=-1;

        else if(front==capacity-1)
            front=0;

        else
           front++;
   }
}
void Queue_Array::queue_front()
{
    if(front<0)
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Front element of queue :- "<<ptr[front]<<endl;
}
void Queue_Array::queue_back()
{
    if(rear<0)
        cout<<"Queue is empty"<<endl;
    else
        cout<<"Back element of queue  :- "<<ptr[rear]<<endl;
}
int main()
{
    Queue_Array q;
    q.create_Queue(4);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    q.queue_front();
    q.queue_back();
    getch();
}
