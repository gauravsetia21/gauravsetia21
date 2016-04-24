#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *lchild;
    struct node *rchild;
    int info;
};
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
void floorfinding(struct node *ptr,struct node *prev,int data)
{

}

int main()
{
    struct node *start=NULL;
    cout<<"enter the no of nodes in the tree\n";
    int n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        start=insert_tree(start,a);
    }
  int data;
  cin>>data;
  floorfinding(start,NULL,data);
    return 0;
}

