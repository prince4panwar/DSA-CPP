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
class Doubly_linked_list
{
private:
struct node
{
    int item;
    node *prev;
    node *next;
};
    node *start;
public:
    Doubly_linked_list(){start=NULL;}//Constructor
    void insertAtFirst(int data);//Insert list item as first node
    void insertAtLast(int data);//Insert list item as last node
    void insert_after(int value, int data);//Insert list item after a given node
    void deleteAtFirst();//Delete first list item
    void deleteAtLast();//Delete last list item
    void delete_node(int value);//Delete a particular node
    void view_List();//View all list element
    void search_node(int data);//Search a list item
    void edit_node(int value , int data);//Edit the node
    ~Doubly_linked_list();// Destructor
};
Doubly_linked_list::~Doubly_linked_list()
{
       while(start!=NULL)
        deleteAtFirst();
}
void Doubly_linked_list::insert_after(int value, int data)
{
    node *t=start;
    if(start==NULL)
       cout<<"List is empty"<<endl;
    else
    {
        while(t!=NULL)
        {
            if(t->item==value)
                break;
            t=t->next;
        }
        if(t==NULL)
           cout<<"No item with value "<<value<<" in the list "<<endl;
        else
        {
            node *n=new node;
            n->item=data;
            n->next=t->next;
            t->next=n;
            n->prev=t;
        }
    }
}
void Doubly_linked_list::insertAtLast(int data)
{
    node *n=new node;
    node *t=start;
    n->item=data;
    n->next=NULL;
    n->prev=NULL;
    if(start==NULL)
    {
        start=n;
    }
    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
        }
        n->prev=t;
        t->next=n;
    }
}
void Doubly_linked_list::insertAtFirst(int data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    n->prev=start;
    if(start==NULL)
    {
        start=n;
    }
    else
    {
        start->prev=n;
        n->next=start;
        start=n;
    }
}
void Doubly_linked_list::view_List()
{
    node *t=start;
    if(start==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        while(t!=NULL)
        {
            cout<<t->item<<" ";
            t=t->next;
        }
        cout<<endl;
    }

}
void Doubly_linked_list::deleteAtFirst()
{
    node *t=start;
    if(start==NULL)
        cout<<"There is no first node"<<endl;
    else
    {
        t=t->next;
        delete start;
        start=t;
        if(start!=NULL)
        t->prev=NULL;
    }
}
void Doubly_linked_list::deleteAtLast()
{
    node *t1,*t2;
    t1=start;
    t2=NULL;
    if(start==NULL)
        cout<<"List is Empty";
    else
    {
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        if(t2==NULL)
            start=NULL;
        else
        {
            t2->next=t1->next;
        }
        delete t1;
    }
}
void Doubly_linked_list::delete_node(int value)
{
    node *t1, *t2;
    t2=NULL;
    t1=start;
    if(start==NULL)
        cout<<"List is Empty";
    else
    {
        while(t1!=NULL)
        {
            if(t1->item==value)
            break;
            t2=t1;
            t1=t1->next;
        }
    if(t1==NULL)
    {
        cout<<"No item with value "<<value<<" in the list "<<endl;
    }
    else
    {
        if(t2==NULL)
        {
            if(t1->next!=NULL)
                t1->next->prev=t2;
            start=t1->next;
        }
        else
        {
            t2->next=t1->next;
            if(t1->next!=NULL)
                t1->next->prev=t2;
        }
         delete t1;
    }
    }
}
 void Doubly_linked_list::search_node(int value)
 {
     node *t=start;
     if(start==NULL)
        cout<<"No item with value "<<value<<" in the list "<<endl;
     else
     {
         int num=0;
        while(t!=NULL)
        {
            num++;
            if(t->item==value)
            {
              cout<<value<<" is in "<<num<<" list node"<<endl;
                break;
            }
            t=t->next;
        }
        if(t==NULL)
        cout<<"No item with value "<<value<<" in the list node"<<endl;
     }
 }
 void Doubly_linked_list::edit_node(int value,int data)
 {
     node *t=start;
     if(start==NULL)
        cout<<"No item with value "<<value<<" in the list "<<endl;
    else
    {
     while(t!=NULL)
     {
        if(t->item==value)
        {
            t->item=data;
            break;
        }
        t=t->next;
     }
    }
     if(t==NULL)
        cout<<"No item with value "<<value<<" in the list node"<<endl;
 }
int main()
{
    Doubly_linked_list d1, d2;
    d1.insertAtFirst(50);
    d1.insertAtFirst(40);
    d1.insertAtFirst(30);
    d1.view_List();

    d2.insertAtLast(10);
    d2.insertAtLast(20);
    d2.insertAtLast(30);
    d2.insertAtLast(40);
    d2.insertAtLast(50);
    d2.view_List();

    d2.insert_after(50,60);

    d2.view_List();
    getch();
}
