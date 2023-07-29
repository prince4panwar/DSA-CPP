//Implementation of Deque by using array(Double ended queue)
#include<iostream>
#include<conio.h>
using namespace std;
class Deque
{
private:
    int capacity;
    int *ptr;
public:
    int front;
    int back;
    Deque(){capacity=0;front=back=-1;ptr=NULL;}
    void create_Deque(int cap);
    void insert_front(int data);
    void insert_back(int data);
    void delete_front();
    void delete_back();
    void deque_front();
    void deque_back();
    bool isFull();
    bool isEmpty();
};
void Deque::create_Deque(int cap)
{
    if(ptr==NULL)
    {
        if(cap<=0)
        {
            cout<<"Invalid Input"<<endl;
        }
        else
        {
            capacity=cap;
            ptr=new int[capacity];
        }
    }
    else
    {
        cout<<"Deque is already created"<<endl;
    }
}
bool Deque::isFull()
{
    return (front==0&&back==capacity-1||front==back+1);
}
bool Deque::isEmpty()
{
    return front==-1;
}
void Deque::insert_back(int data)
{
    if(ptr!=NULL)
    {
        if(front==0&&back==capacity-1||front==back+1)
            cout<<"Deque overflow"<<endl;
        else if(front==-1)
        {
            front=back=0;
            ptr[back]=data;
        }
        else if(back==capacity-1)
        {
            back=0;
            ptr[back]=data;
        }
        else
        {
            back++;
            ptr[back]=data;
        }
    }
    else
    {
        cout<<"Deque is not created"<<endl;
    }
}
void Deque::insert_front(int data)
{
    if(ptr!=NULL)
    {
        if(front==0&&back==capacity-1||front==back+1)
            cout<<"Deque overflow"<<endl;
        else if(front==-1)
        {
            front=back=0;
            ptr[front]=data;
        }
        else if(front==0)
        {
            front=capacity-1;
            ptr[front]=data;
        }
        else
        {
            front--;
            ptr[front]=data;
        }
    }
    else
    {
        cout<<"Deque is not created"<<endl;
    }
}
void Deque::delete_front()
{
    if(ptr!=NULL)
    {
        if(front==-1)
        {
            cout<<"Deque is empty"<<endl;
        }

        else if(back==front)
        {
            front=back=-1;
        }
        else if(front==capacity-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
    else
    {
        cout<<"Deque is not created"<<endl;
    }
}
void Deque::delete_back()
{
    if(ptr!=NULL)
    {
        if(front==-1)
            cout<<"Deque is empty"<<endl;
        else if (front==back)
            front=back=-1;
        else if(back==0)
            back=capacity-1;
        else
            back--;
    }
    else
    {
        cout<<"Deque is not created"<<endl;
    }
}
void Deque::deque_front()
{
    if(ptr!=NULL)
    {
        if(front==-1)
            cout<<"Deque is empty"<<endl;
        else
            cout<<"Front element of the Deque :- "<<ptr[front]<<endl;
    }
    else
    {
        cout<<"Deque is not created"<<endl;
    }
}
void Deque::deque_back()
{
    if(ptr!=NULL)
    {
        if(back==-1)
            cout<<"Deque is empty"<<endl;
        else
            cout<<"Back element of the Deque  :- "<<ptr[back]<<endl;
    }
    else
    {
        cout<<"Deque is not created"<<endl;
    }
}
int main()
{
    Deque d;
    d.create_Deque(5);
    d.insert_front(99);
    d.insert_back(999);
    d.insert_front(88);
    d.insert_front(77);

    d.delete_back();

    d.deque_front();
    d.deque_back();

    getch();
}
