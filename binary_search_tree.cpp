//BINARY SEARCH TREE
#include<bits/stdc++.h>
using namespace std;
 int arr[1000]={0};
struct node
{
    struct node *lchild;
    struct node *rchild;
    int info;
};

struct node *insert_tree(struct node *root,int ikey)   //creation of a tree
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

struct node *min_value(struct node *root)
{
    struct node *ptr=root;
    if(ptr!=NULL)
        while(ptr->lchild!=NULL)
            ptr=ptr->lchild;
    return ptr;
}

struct node *max_value(struct node *root)
{
    struct node *ptr=root;
    if(ptr!=NULL)
        while(ptr->rchild!=NULL)
            ptr=ptr->rchild;
    return ptr;
}

struct node *search_tree(struct node *root,int value)
{
    struct node *ptr=root;
    while(ptr!=NULL)
    {
        if(ptr->info==value)
            return ptr;
        else if(ptr->info>value)
            ptr=ptr->lchild;
        else
            ptr=ptr->rchild;

    }
    cout<<"Element not found\n";
    return NULL;
}

void lowest_common_ancestor(struct node *start,int item1,int item2) // LCA or Shortest path between 2 nodes
{
    struct node *ptr=start;
    if(ptr==NULL)
        cout<<"Tree is empty\n";
    while(ptr!=NULL)
    {
        if(ptr->info>item1&&ptr->info>item2)
            ptr=ptr->lchild;
        else if(ptr->info<item1&&ptr->info<item2)
            ptr=ptr->rchild;
        else
        {
            cout<<"Lowest Common Ancestor is->"<<ptr->info<<endl;
            break;
        }
    }
}
void inorder(struct node *ptr,int q)
{
    if(ptr==NULL)
    return;
   inorder(ptr->lchild,q);
    arr[q++]=ptr->info;
    inorder(ptr->rchild,q);
}
int height_of_tree(struct node *ptr)
{    int left_height,right_height;
   if(ptr==NULL)
        return 0;
    left_height=height_of_tree(ptr->lchild);
    right_height=height_of_tree(ptr->rchild);
    return (1+max(left_height,right_height));
}
void isBST(int n)
{

   for(int i=0;i<n-1;i++)
   {
     if(arr[i]>=arr[i+1])
     {
          cout<<"NOT BST\n";
         return;
      }

   }
   cout<<"IT IS BST\n";
}
int no_of_nodes(struct node *ptr)
{
    if(ptr==NULL)
        return 0;
    else
        return(no_of_nodes(ptr->lchild)+1+no_of_nodes(ptr->rchild));
}

int main()
{
    struct node *start=NULL;
    struct node *chaska;
    cout<<"enter the no of nodes in the tree\n";
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        start=insert_tree(start,a);
    }
 cout<<"Min node in  tree is\n";
    chaska=min_value(start);
    cout<<chaska->info<<endl;
    cout<<"Max node in  tree is\n";
    chaska=max_value(start);
    cout<<chaska->info<<endl;
    //LCA
     int item1,item2;
     cout<<"enter item1,item2\n";
     cin>>item1>>item2;
     lowest_common_ancestor(start,item1,item2);
int height=height_of_tree(start);
     cout<<"height of tree is->>>\n"<<height-1<<endl;
//checking whether it is bst

    inorder(start,0);
    isBST(n);
//----------------------------

  cout<<no_of_nodes(start)<<endl;               //this function calculates the no of nodes in a tree or size of a tree
    return 0;
}









