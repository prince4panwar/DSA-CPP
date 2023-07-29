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
class Singly_linked_list
{
private:
struct node
{
    int item;
    node *next;
};
    node *start;
public:
    Singly_linked_list(){start=NULL;}//Constructor
    void insertAtLast(int data);//Insert list item as last node
    void insertAtFirst(int data);//Insert list item as first node
    void insert_After(int value,int data);//Insert list item after a given node
    void delete_First();//Delete first list item
    void delete_Last();//Delete last list item
    void delete_Node(int value);//Delete a particular node
    void search_item(int value);//Search a list item
    void edit_node(int value,int data);//Edit the node by new value
    void view_List();//View all list element
    ~Singly_linked_list();//Destructor

};
Singly_linked_list::~Singly_linked_list()//Destructor
{
    while(start!=NULL)
        delete_First();
}
void Singly_linked_list::insert_After(int value, int data)
{
    node *t=start;
    while(t!=NULL)
    {
        if(t->item==value)
            break;
        t=t->next;
    }

    if(t!=NULL)//node found
    {
        node *n=new node;
        n->item=data;
        n->next=t->next;
        t->next=n;
    }
    else
    {
        cout<<"No item with value "<<value<<" in the list "<<endl;
    }
}
void Singly_linked_list::insertAtFirst(int data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}
void Singly_linked_list::delete_First()
{
    if(start==NULL)
        cout<<"Empty list ";
    else
    {
        node *t=start;
        t=t->next;
        delete start;
        start=t;
    }
}
void Singly_linked_list::insertAtLast(int data)
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
void Singly_linked_list::delete_Last()
{
    node *t1, *t2;
    if(start==NULL)
    {
         cout<<"\nEmpty list ";
    }
    else
    {
        t1=start;
        t2=NULL;
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }

        if(t2==NULL)
        {
            start=NULL;
        }
        else
        {
            t2->next=NULL;
        }
        delete t1;
    }
}
void Singly_linked_list::delete_Node(int value)
{
    node *t1, *t2;
    t1=start;
    t2=NULL;
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
            start=t1->next;
        }
        else
        {
            t2->next=t1->next;
        }
         delete t1;
    }
}
void Singly_linked_list::view_List()
{
    node *t=start;
    while(t!=NULL)
    {
        cout<<t->item<<" ";
        t=t->next;
    }
    cout<<endl;

}
void Singly_linked_list::search_item(int value)
{
    node *t=start;
    if(start==NULL)
    {
        cout<<"No item with value "<<value<<" in the list node"<<endl;
    }
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
void Singly_linked_list::edit_node(int value,int data)
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
    Singly_linked_list l1,l2;
    l1.insertAtLast(10);
    l1.insertAtLast(20);
    l1.insertAtLast(30);
    l1.insertAtLast(40);
    l1.insertAtLast(50);
    l1.view_List();

    l2.insertAtFirst(10);
    l2.insertAtFirst(20);
    l2.insertAtFirst(30);
    l2.insertAtFirst(40);
    l2.insertAtFirst(50);
    l2.view_List();

    l2.edit_node(20,99999);
        l2.view_List();

    getch();
}

