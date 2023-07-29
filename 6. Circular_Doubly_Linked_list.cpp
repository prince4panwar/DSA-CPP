/*Define Circular Doubly linked list with following services
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
class Circular_Doubly_linked_list
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
    Circular_Doubly_linked_list(){start=NULL;}//Consructor
    void insertAtFirst(int data);//Insert list item as first node
    void insertAtLast(int data);//Insert list item as last node
    void insert_after(int value, int data);//Insert list item after a given node
    void deleteAtFirst();//Delete first list item
    void deleteAtLast();//Delete last list item
    void delete_node(int value);//Delete a particular node
    void view_List();//View all list element
    void search_node(int data);//Search a list item
    void edit_node(int value , int data);//Edit the node
    void view_reverse_list();
    //~Circular_Doubly_linked_list();//Destructor

};
/*Circular_Doubly_linked_list::~Circular_Doubly_linked_list()
{
    while(start!=NULL)
        deleteAtFirst();
}*/

void Circular_Doubly_linked_list::view_List()
{
    node *t=start;
    if(start==NULL)
        cout<<"List is empty";
    else
    {
        while(t->next!=start)
        {
            cout<<t->item<<" ";
            t=t->next;
        }
        cout<<t->item<<endl;
    }
}
void Circular_Doubly_linked_list::view_reverse_list()
{
    if(start==NULL)
        cout<<"List is empty "<<endl;
    else
    {
        node *t=start->prev;
        while(t!=start)
        {
            cout<<t->item<<" ";
            t=t->prev;
        }
        cout<<t->item<<endl;
    }
}
void Circular_Doubly_linked_list::insertAtFirst(int data)
{
    node *n=new node;
    n->item=data;
    if(start==NULL)
    {
        n->prev=n;
        n->next=n;
    }
    else
    {
        n->next=start;
        n->prev=start->prev;
        if(start->prev!=start)
        start->prev->next=n;
        else
        start->next=n;
        start->prev=n;
    }
    start=n;
}
void Circular_Doubly_linked_list::insertAtLast(int data)
{
    node *n=new node;
    n->item=data;
    if(start==NULL)
    {
        n->prev=n;
        n->next=n;
        start=n;
    }
    else
    {

        n->next=start;
        if(start->next==start)
        start->next=n;
        else
        start->prev->next=n;
        n->prev=start->prev;
        start->prev=n;
    }
}
void Circular_Doubly_linked_list::insert_after(int value, int data)
{
    node *n=new node;
    n->item=data;
    if(start==NULL)
        cout<<"List is empty "<<endl;
    else
    {
        node *t=start;
        while(t->next!=start)
        {
            if(t->item==value)
                break;
            t=t->next;
        }
        if(t->next==start)
        {
            if(t->item==value)
            {
                n->next=start;
                n->prev=t;
                t->next=n;
                start->prev=n;
            }
            else
                cout<<"No item with value "<<value<<" in the list "<<endl;
        }
        else
        {
            n->next=t->next;
            t->next->prev=n;
            t->next=n;
            n->prev=t;
        }
    }
}
void Circular_Doubly_linked_list::deleteAtFirst()
{
   if(start==NULL)
    cout<<"List is empty"<<endl;
   else
   {
     node *t=start;
     if(start->next==start)
        start=NULL;
     else
     {
         start->next->prev=start->prev;
         start->prev->next=start->next;
         start=start->next;
     }
     delete t;
   }
}
void Circular_Doubly_linked_list::deleteAtLast()
{
    if(start==NULL)
        cout<<"List is empty"<<endl;
   else
   {
        node *t=start->prev;
        if(start->prev==start)
        start=NULL;
        else
        {
            t->prev->next=start;
            start->prev=t->prev;
        }
        delete t;
   }
}
void Circular_Doubly_linked_list::delete_node(int value)
{
    if(start==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        node *t=start;
        while(t->next!=start)
        {
            if(t->item==value)
                break;
            t=t->next;
        }
        if(t->next==start&&t!=start)
        {
                if(t->item==value)
                {
                    t->prev->next=t->next;
                    t->next->prev=t->prev;
                    delete t;
                }
                else
                    cout<<"No item with value "<<value<<" in the list "<<endl;
        }
        else
        {
            if(t==start)
            {
                if(t->next==t->prev)
                    start=NULL;
                else
                {
                    start=t->next;
                    t->prev->next=t->next;
                    t->next->prev=t->prev;
                }
            }
            else
            {
                t->prev->next=t->next;
                t->next->prev=t->prev;
            }
            delete t;
        }
    }
}
void Circular_Doubly_linked_list::search_node(int value)
{
    node *t=start;
    int n=0;
    if(start==NULL)
        cout<<"List is empty";
    else
    {
        while(t->next!=start)
        {
            n++;
            if(t->item==value)
            {
                cout<<value<<" is in "<<n<<" list node"<<endl;
                break;
            }
            t=t->next;
        }
        if(t->next==start)
        {
            n++;
            if(t->item==value)
                    cout<<value<<" is in "<<n<<" list node"<<endl;
            else
                cout<<"No item with value "<<value<<" in the list node"<<endl;
        }
    }
}
void Circular_Doubly_linked_list::edit_node(int value, int data)
{
    node *t=start;
    if(start==NULL)
        cout<<"List is empty";
    else
    {
        while(t->next!=start)
        {
            if(t->item==value)
            {
                t->item=data;
                break;
            }
            t=t->next;
        }
        if(t->next==start)
        {
            if(t->item==value)
                t->item=data;
            else
                cout<<"No item with value "<<value<<" in the list node"<<endl;
        }
    }
}
int main()
{
    Circular_Doubly_linked_list cd1,cd2;
    cd1.insertAtFirst(10);
    cd1.insertAtFirst(20);
    cd1.insertAtFirst(30);
    cd1.insertAtFirst(40);
    cd1.insertAtFirst(50);

    cd1.view_List();

    cd2.insertAtLast(10);
    cd2.insertAtLast(20);
    cd2.insertAtLast(30);
    cd2.insertAtLast(40);
    cd2.insertAtLast(50);

    cd2.view_List();
    cd2.edit_node(60,999);
    cd2.view_List();

    getch();
}
