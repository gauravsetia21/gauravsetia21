#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
};
struct node *addtoempty(struct node *start,int data)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    start=tmp;
    tmp->link=NULL;
    return start;
}
struct node *addatend(struct node *start,int data)
{
    struct node *tmp,*p;
    p=start;
    tmp=(struct node *)malloc(sizeof(struct node));
    while(p->link!=NULL)
        p=p->link;
    p->link=tmp;
    tmp->link=NULL;
    tmp->info=data;
    return start;

}
struct node *create_list(struct node *start)
{
    int n,data,i=0;
    cout<<"enter the no of nodes u wanna enter\n";
    cin>>n;
    cout<<"enter data\n";
    cin>>data;
    start=addtoempty(start,data);
    for(i=2; i<=n; i++)
    {
        cout<<"enter data\n";
        cin>>data;
        start=addatend(start,data);
    }
    return start;
}
struct node *recursion(struct node *ptr)
{
    struct node *tmp;
  if(ptr->link==NULL)
    return ptr;
  tmp=recursion(ptr->link);
 ptr->link->link=ptr;
 ptr->link=NULL;
 return tmp;

}
void display(struct node *p)
{
     while(p!=NULL)
     {
         cout<<p->info<<"\t";
         p=p->link;
     }
}
int main()
{
    struct node *start=NULL;
    start=create_list(start);
    cout<<"linked list before reversal is\n";
    display(start);
    start=recursion(start);
    cout<<"linked list after inversion is\n";
    display(start);
    return 0;
}





















