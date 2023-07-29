/*Define linked list with following services
    a.  Insert list item as first node
    b.  Insert list item as last node
    c.  Insert list item after a given node
    d.  Delete first list item
    e.  Delete last list item
    f.  Delete a particular node
    g.  View all list element
    h.  Search a list item
    i.  Constructor
    j.  Destructor */
#include<iostream>
#include<conio.h>
using namespace std;
class list
{
private:
struct node
{
    int item;
    node *next;
};
    node *start;
public:
    list(){start=NULL;}
    void insertAtLast(int data);//Insert list item as last node
    void insertAtFirst(int data);//Insert list item as first node
    void insert_after(int position,int data);//Insert list item after a given node
    void delete_First();//Delete first list item
    void delete_Last();//Delete last list item
    void delete_item(int);//Delete a particular node
    void viewItem();//View all list element
};
/*void list::delete_item(int position)
{
    node *t=start;
    int i=1;
    if(start==NULL)
        cout<<"Invalid Input "<<endl;
    while(t->next!=start)
    {
        if(i<position)
        {
            i++;
            t=t->next;
        }
        if(i==position)

    }
    if(t->next==NULL)
        cout<<"Invalid Input ";
}*/
void list::delete_Last()
{
    node *t=start;
    int count=0,i;
    if(start==NULL)
        cout<<"Empty list ";
    while(t->next!=NULL)
    {
        count++;
        t=t->next;
    }
    node *temp=start;
    for(i=1; i<=count; i++)
    {
        if(i==count)
        {
            node *stop=temp->next;
            temp->next=NULL;
            delete stop;
            break;
        }
        else if(i<count)
        {
           temp=temp->next;
        }
    }
}
void list::delete_First()
{
    if(start==NULL)
        cout<<"Empty list ";
    node *t=start;
    t=t->next;
    delete start;
    start=t;
}
void list::insert_after(int position,int data)
{
    node *n=new node;
    node *t;
    n->item=data;
    if(start==NULL)
    {
        n->next=NULL;
        start=n;
    }
    else
    {
        t=start;
        int i=1;
        while(t->next!=NULL)
        {
           if(i<position)
           {
            i++;
            t=t->next;

           }
           else if(i==position)
           {
                t->next=n;
                n->next=n->next->next;

           }
           i++;
        }
        if(t->next==NULL)
        {
            n->next=NULL;
            t->next=n;
        }

    }

}
void list::insertAtLast(int data)
{
     node *t;
     node *n=new node;
     n->item=data;
     n->next=NULL;
     if(start==NULL)
     {
         start=n;
     }
     else
     {
         t=start;
         while(t->next!=NULL)
            t=t->next;
         t->next=n;
     }

}
void list::viewItem()
{
    node *t=start;
    while(t->next!=NULL)
    {
        cout<<t->item<<" ";
        t=t->next;
    }
    if(t->next==NULL)
        cout<<t->item<<" ";

    cout<<endl;

}
void list::insertAtFirst(int data)
{
    node *t;
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
    {
        start=n;
    }
    else
    {
       t=new node;
       t->item=data;
       t->next=start;
       start=t;
    }

}

int main()
{
    list l1,l2;
    l1.insertAtLast(10);
    l1.insertAtLast(20);
    l1.insertAtLast(30);
    l1.insertAtLast(40);
    l1.insertAtLast(50);
    l1.viewItem();

    l2.insertAtFirst(10);
    l2.insertAtFirst(20);
    l2.insertAtFirst(30);
    l2.insertAtFirst(40);
    l2.insertAtFirst(50);
    l2.viewItem();

    l1.delete_Last();
    l1.viewItem();

    l2.delete_Last();
    l2.viewItem();
    getch();
}
