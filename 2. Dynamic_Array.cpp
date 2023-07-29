/*Implement Dynamic Array Data Structure with the following services
  a.  Create an array
  b.  Append an item
  c.  Insert an item
  d.  Count total items present
  e.  Get item at given index
  f.  Delete an item from a given index
  g.  Edit en item
  h.  Search an item
  i.  View all items
  j.  Constructor
  k.  Destructor*/
#include<iostream>
#include<conio.h>
using namespace std;
class DynamicArray
{
private:
    int capacity;
    int lastIndex;
    int* ptr;
public:
    void create_Array(int cap);
    void append_Array(int data);
    void insert_Array(int index,int data);
    void delete_Array(int index);
    int  get_Array(int index);
    int  count_Array();
    int  search_Array(int data);
    void edit_Array(int index,int data);
    void doubleArray();//Array is growing Dynamically
    void halfArray();//Array is getting half
    void show_capacity();
    ~DynamicArray()//Destructor
    {
        delete []ptr;
    }
};

/*void DynamicArray::doubleArray()//Array is growing Dynamically
{
    int* qtr;
    qtr=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
    qtr[i]=ptr[i];

    delete []ptr;
    capacity=2*capacity;
    ptr=new int[capacity];

    for(int i=0;i<=lastIndex;i++)
    ptr[i]=qtr[i];
    delete []qtr;
}*/
void DynamicArray::doubleArray()
{
    capacity*=2;
    int *temp;
    temp=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
}

void DynamicArray::halfArray()//Array is getting half
{
    int* qtr;
    qtr=new int[capacity/2];
    for(int i=0;i<=lastIndex;i++)
    qtr[i]=ptr[i];

    delete []ptr;
    capacity=capacity/2;
    ptr=new int[capacity];

    for(int i=0;i<=lastIndex;i++)
    ptr[i]=qtr[i];
    delete []qtr;
}
/*void DynamicArray::halfArray()
{
    capacity/=2;
    int *temp;
    temp=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
        delete []ptr;
    ptr=temp;

}*/

void DynamicArray::create_Array(int cap)
{
    capacity=cap;
    lastIndex=-1;
    ptr=new int[capacity];
}

void DynamicArray::append_Array(int data)
{
    if(lastIndex+1==capacity)
    {
        doubleArray();//Array is growing Dynamically
    }

    lastIndex++;
    ptr[lastIndex]=data;
}

void DynamicArray::insert_Array(int index,int data)
{
    if(index<0||index>lastIndex+1)
    {
        cout<<"Invalid Input ";
    }
    else if(lastIndex+1==capacity)
    {
        doubleArray();//Array is growing Dynamically
    }
    for(int i=lastIndex;i>=index;i--)
    {
        ptr[i+1]=ptr[i];
    }
    ptr[index]=data;
    lastIndex++;
}

void DynamicArray::delete_Array(int index)
{
    if(index<0||index>lastIndex)
    {
        cout<<"Invalid Input or Empty array ";
    }
    else
    {
        for(int i=index;i<lastIndex;i++)
           ptr[i]=ptr[i+1];

           lastIndex--;
        if(lastIndex+1==capacity/2)
        {
           halfArray();//Array is getting half
        }
    }
}
int DynamicArray::get_Array(int index)
{
    if(index<0||index>lastIndex)
    {
        cout<<"Invalid Input ";
        return 0;
    }
    else
    {
        return ptr[index];
    }
}
void DynamicArray::show_capacity()
{
        cout<<endl<<"Size of the array is "<<capacity<<endl;
}
int DynamicArray::count_Array()
{
  return lastIndex+1;
}

int DynamicArray::search_Array(int data)
{
            for(int i=0;i<=lastIndex;i++)
                if(ptr[i]==data)
                    return i;
            return -1;
}

void DynamicArray::edit_Array(int index,int data)
    {
        if(index<0||index>lastIndex)
            cout<<"Invalid Input or Empty Array ";
        else
        {
            ptr[index]=data;
        }
    }
int menu()
{
    int choice;
    cout<<"\n1. Append";
    cout<<"\n2. Insert";
    cout<<"\n3. Delete";
    cout<<"\n4. Edit";
    cout<<"\n5. Search";
    cout<<"\n6. View";
    cout<<"\n7. Exit"<<endl<<endl;
    cout<<"Enter number (1-7) to proceed for Array Operations :- ";
    cin>>choice;
    return choice;
}
void viewArrayData(DynamicArray &arr)
{
    int i;
    cout<<endl;
    arr.show_capacity();
    cout<<endl;
    for(i=0;i<arr.count_Array();i++)
        cout<<arr.get_Array(i)<<" ";
    cout<<endl;
}
int main()
{
    int data,index;
    DynamicArray arr;
    arr.create_Array(1);
    while(true)
    {
        system("cls");
        cout<<"\nTotal Elements in array :- "<<arr.count_Array();
        viewArrayData(arr);
        switch(menu())
        {
        case 1:
            cout<<"Enter data to append :- ";
            cin>>data;
            arr.append_Array(data);
            break;
        case 2:
            cout<<"Enter data to insert :- ";
            cin>>data;
            cout<<"Enter index to insert :- ";
            cin>>index;
            arr.insert_Array(index,data);
            break;
        case 3:
            cout<<"Enter index for deletion :- ";
            cin>>index;
            arr.delete_Array(index);
            break;
        case 4:
            cout<<"Enter data to search :- ";
            cin>>index;
            cout<<"Enter data to edit :- ";
            cin>>data;
            arr.edit_Array(index,data);
            break;
        case 5:
            cout<<"Enter data to search :- ";
            cin>>data;
            index=arr.search_Array(data);
            if(index==-1)
                cout<<"Search failed :- ";
            else
                cout<<"Element found at index = "<<index;
            break;
        case 6:
            exit(0);
        default:
            cout<<"Invalid choice";

        }
        getch();
    }

}
