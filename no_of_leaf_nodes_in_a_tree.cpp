//no of leaf nodes
#include<bits/stdc++.h>
using namespace std;
int top=-1;
static int ct=0;
#define MAX 100
struct node
{
    struct node *lchild;
    struct node *rchild;
    int info;
};
struct node *stack_array[100];
int isempty()
{
   if(top==-1)
        return 1;
        else
        return 0;
}

struct node *insert_tree(struct node *root,int ikey)
{
    struct node *ptr=root;
    struct node *par=NULL;
    while(ptr!=NULL)
    {
        par=ptr;
        if(ptr->info>ikey)
            ptr=ptr->lchild;
        else if(ptr->info<ikey)
            ptr=ptr->rchild;
        else
        {
            cout<<"Duplicate keys exist\n";
            return root;
        }
    }
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=ikey;
    tmp->lchild=NULL;
    tmp->rchild=NULL;
    if(par==NULL)
        root=tmp;
    else if(par->info>ikey)
        par->lchild=tmp;
    else
        par->rchild=tmp;
    return root;
}


void push_stack(struct node *data)
{

    top=top+1;
    stack_array[top]=data;
}

 struct node * pop_stack()
{

        return(stack_array[top--]);
}


void inorder1(struct node *ptr)
{  int i=0;
  while(1)
{   i=0;
    while(1)
    {  if(ptr->lchild==NULL)
         {i++;
         break;}
        push_stack(ptr);
        ptr=ptr->lchild;
    }
    while(ptr->rchild==NULL)
    {
         if(i!=0)
            ct++;
       //
        if(isempty())
            return;
        ptr=pop_stack();
        i=0;
    }

  //
    ptr=ptr->rchild;

}

}


int main()
{
    struct node *start=NULL;
    cout<<"enter the no of nodes in the tree\n";
    int n,a;
    cin>>n;
    int no=n;
    while(n--)
    {
        cin>>a;
        start=insert_tree(start,a);
    }
     inorder1(start);
     cout<<ct<<endl;
    return 0;
}


