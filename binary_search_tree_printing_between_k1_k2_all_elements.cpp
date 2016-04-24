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
void inorder(struct node *ptr,int k1,int k2)
{
    if(ptr==NULL)
    return;
   inorder(ptr->lchild,k1,k2);
    if(ptr->info>k1&&ptr->info<k2)
        cout<<ptr->info<<"\t";
    if(ptr->info>k2)
        return;
    inorder(ptr->rchild,k1,k2);
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
    cout<<"insert the two no's\n";
    int k1,k2;
    cin>>k1>>k2;
    inorder(start,k1,k2);
    return 0;
}




