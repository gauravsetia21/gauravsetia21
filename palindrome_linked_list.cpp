#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
};
void display(struct node *start)
{
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        cout<<p->info<<endl;
        p=p->link;
    }
}
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
struct node *reversal(struct node *start)
{   struct node *prev=NULL;
     struct node *ptr=start;
     struct node *next;
    while(ptr!=NULL)
    {
        next=ptr->link;
        ptr->link=prev;
        prev=ptr;
        ptr=next;
    }
    start=prev;
    return start;
}
int matching(struct node *start1,struct node *start2)
{
    struct node *p1=start1,*p2=start2;
    while(p2!=NULL)
    {
        if(p1->info!=p2->info)
        return 0;
        p1=p1->link;
        p2=p2->link;
    }
    return 1;
}
void midnode(struct node *start)
{   struct node *start2;
     struct node *y;
    struct node *p1=start;
    struct node *p2=p1->link;
    if(p2!=NULL)
  {
      while(p2->link!=NULL)
    {
        p1=p1->link;
        p2=p2->link;
        if(p2->link==NULL)
            break;
        p2=p2->link;
    }
  }
    y=p1->link;
     p1->link=NULL;
    start2=reversal(y);
   int x=matching(start,start2);
   if(x==1)
    cout<<"Yes";
   else
    cout<<"No";
}
int main()
{
    struct node *start=NULL;
    start=create_list(start);
    midnode(start);
    return 0;
}
















