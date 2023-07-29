#include<iostream>
#include<conio.h>
using namespace std;
class Binary_Search_Tree
{
private:
    struct node
    {
        node *left;
        int item;
        node *right;
    };

    node *root;
protected:
    void inorderT(node *);
    void preorderT(node *);
    void postorderT(node *);
public:
    Binary_Search_Tree();
    void insert(int data);
    void inorder();
    void preorder();
    void postorder();
    void deleteB(int data);

};
Binary_Search_Tree::Binary_Search_Tree(){root=NULL;}
void Binary_Search_Tree::deleteB(int data)
{
    node *parentptr=NULL;
    node *ptr=root;
    if(root==NULL)
        cout<<"Invalid input"<<endl;
    else
    {
        while(true)
        {
            if(ptr->item==data)
            {
                 if(ptr->left==NULL&&ptr->right==NULL)
                 {
                        if(parentptr->left==ptr)
                            parentptr->left=NULL;
                        else
                            parentptr->right=NULL;
                        delete ptr;
                 }
                 else if(ptr->left==NULL||ptr->right==NULL)
                 {
                        if(parentptr->left==ptr)
                        {
                             if(ptr->left!=NULL)
                                parentptr->left=ptr->left;
                             else
                                parentptr->left=ptr->right;
                        }
                        else
                        {
                            if(ptr->left!=NULL)
                                parentptr->right=ptr->left;
                            else
                                parentptr->right=ptr->right;
                        }
                        delete ptr;
                }
                else
                {
                    node *parentpred=ptr;
                    node *pred=ptr->left;
                    while(pred->right!=NULL)
                    {
                        parentpred=pred;
                        pred=pred->right;
                    }
                    ptr->item=pred->item;

                    if(pred->left==NULL&&pred->right==NULL)
                    {
                        if(parentpred->left==pred)
                            parentpred->left=NULL;
                        else
                            parentpred->right=NULL;

                        delete pred;
                    }
                    else if(pred->left==NULL||pred->right==NULL)
                    {
                        if(parentpred->left==pred)
                        {
                            if(pred->left!=NULL)
                                parentpred->left=pred->left;
                            else
                                parentpred->left=pred->right;
                        }
                        else
                        {
                            if(pred->left!=NULL)
                                parentpred->right=pred->left;
                            else
                                parentpred->right=pred->right;
                        }

                        delete pred;
                    }

                }
            }
            else if(ptr->item>data)
            {
                parentptr=ptr;
                ptr=ptr->left;
            }
            else
            {
                parentptr=ptr;
                ptr=ptr->right;
            }
        }
    }
}
void Binary_Search_Tree::insert(int data)
{
    node *n=new node;
    n->left=NULL;
    n->item=data;
    n->right=NULL;
    if(root==NULL)
    {
        root=n;
    }
    else
    {
        node *t;
        t=root;
        while(true)
        {
            if(t->item==data)
            {
                //duplicate value
                cout<<"Invalid Input"<<endl;
                delete n;
                break;
            }
            else if(t->item>data)
            {
                //insert in left subtree
                if(t->left==NULL)
                {
                t->left=n;
                    break;
                }
                else
                t=t->left;
            }
            else
            {
                //insert data in right subtree
                if(t->right==NULL)
                {
                t->right=n;
                    break;
                }
                else
                t=t->right;
            }
        }
    }
}

void Binary_Search_Tree::inorderT(node *t)
{
    if(t==NULL)
    {
        return;
    }
    inorderT(t->left);
    cout<<t->item<<" ";
    inorderT(t->right);
}
void Binary_Search_Tree::inorder()
{
    inorderT(root);
}

void Binary_Search_Tree::preorderT(node *t)
{
    if(t==NULL)
    {
        return;
    }
    cout<<t->item<<" ";
    preorderT(t->left);
    preorderT(t->right);
}
void Binary_Search_Tree::preorder()
{
    preorderT(root);
}

void Binary_Search_Tree::postorderT(node *t)
{
    if(t==NULL)
    {
        return;
    }
    postorderT(t->left);
    postorderT(t->right);
    cout<<t->item<<" ";
}
void Binary_Search_Tree::postorder()
{
    postorderT(root);
}
int main()
{
    Binary_Search_Tree b1;
    b1.insert(50);
    b1.insert(70);
    b1.insert(30);
    b1.insert(60);
    b1.insert(90);
    b1.insert(65);
    b1.inorder();
    b1.deleteB(70);
    cout<<endl;
    b1.inorder();

    getch();
}

