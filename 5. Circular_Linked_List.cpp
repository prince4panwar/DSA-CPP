/*Define Circular list with following services
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
class Circular_linked_list
{
private:
    struct node
    {
        int item;
        node *next;
    };
    node *last;
public:
    Circular_linked_list(){last=NULL;}//Constructor
    void insertAtFirst(int data);//Insert list item as first node
    void insertAtLast(int data);//Insert list item as last node
    void insert_after(int value, int data);//Insert list item after a given node
    void deleteAtFirst();//Delete first list item
    void deleteAtLast();//Delete last list item
    void delete_node(int value);//Delete a particular node
    void view_List();//View all list element
    void search_node(int data);//Search a list item
    void edit_node(int value , int data);//Edit the node
    ~Circular_linked_list();//Destructor

};
Circular_linked_list::~Circular_linked_list()
{
    while(last!=NULL)
        deleteAtFirst();
}
void Circular_linked_list::insertAtFirst(int data)
{
    node *n=new node;
    n->item=data;
    if(last==NULL)
    {
        n->next=n;
        last=n;
    }
    else
    {
        n->next=last->next;
        last->next=n;
    }
}
void Circular_linked_list::insertAtLast(int data)
{
    node *n=new node;
    n->item=data;
    if(last==NULL)
    {
        n->next=n;
    }
    else
    {
        n->next=last->next;
        last->next=n;
    }
    last=n;
}
void Circular_linked_list::view_List()
{
    if(last==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        node *t=last->next;
        while(t!=last)
        {
            cout<<t->item<<" ";
            t=t->next;
        }
        cout<<last->item<<endl;
    }
}
void Circular_linked_list::insert_after(int value, int data)
{
    node *t;
    t=last->next;
    if(last==NULL)
        cout<<"List is empty";
    else
    {
        node *n=new node;
        n->item=data;
            while(t!=last)
            {
                if(t->item==value)
                    break;
                t=t->next;
            }
        if(t->item!=value)
            cout<<"No item with value "<<value<<" in the list "<<endl;
        else
        {
            n->next=t->next;
            t->next=n;
            if(t==last)
                last=n;
        }
    }
}
void Circular_linked_list::deleteAtFirst()
{
    if(last==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        node *t=last->next;
        if(t==last)
            last=NULL;
        else
        last->next=t->next;
        delete t;
    }

}
void Circular_linked_list::deleteAtLast()
{
    if(last==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        node *t=last->next;
        while(t->next!=last)
        {
            t=t->next;
        }
        if(t==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            t->next=last->next;
            delete last;
            last=t;
        }
    }
}

void Circular_linked_list::delete_node(int value)
{
    node *t1, *t2;
    if(last==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        t1=last->next;
        t2=NULL;
            while(t1!=last)
            {
                if(t1->item==value)
                    break;
                t2=t1;
                t1=t1->next;
            }
            if(t1==last)
            {
                    if(t1->item==value)
                    {
                        if(t2!=NULL)
                        {
                            t2->next=t1->next;
                            delete t1;
                        }
                        last=t2;
                    }
                    else
                        cout<<"No item with value "<<value<<" in the list "<<endl;
            }
            else
            {
                if(t2==NULL)
                    last->next=t1->next;
                else
                    t2->next=t1->next;
                delete t1;
            }

     }
}
void Circular_linked_list::search_node(int value)
{
    node *t=last->next;
    int n=0;
    if(last==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        while(t!=last)
        {
            n++;
            if(t->item==value)
            {
                cout<<value<<" is in "<<n<<" list node"<<endl;
                break;
            }
            t=t->next;
        }
        if(t==last)
        {
             n++;
            if(t->item==value)
                cout<<value<<" is in "<<n<<" list node"<<endl;
            else
                cout<<"No item with value "<<value<<" in the list node"<<endl;
        }

    }
}
void Circular_linked_list::edit_node(int value , int data)
{
    node *t=last->next;
    if(last==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        while(t!=last)
        {
            if(t->item==value)
            {
              t->item=data;
              break;
            }
            t=t->next;
        }
        if(t==last)
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
    Circular_linked_list c1, c2;
    c1.insertAtLast(10);
    c1.insertAtLast(20);
    c1.insertAtLast(30);
    c1.insertAtLast(40);
    c1.insertAtLast(50);

    c1.view_List();

    c2.insertAtFirst(10);
    c2.insertAtFirst(20);
    c2.insertAtFirst(30);
    c2.insertAtFirst(40);
    c2.insertAtFirst(50);

     c2.view_List();

    c2.view_List();

    c2.edit_node(10,9999);
    c2.view_List();

    getch();

}
