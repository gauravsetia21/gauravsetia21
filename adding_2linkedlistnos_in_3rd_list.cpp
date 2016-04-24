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
        cout<<p->info;
        p=p->link;
    }
}
struct node *addatbegin(struct node *start,int data)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=start;
    start=tmp;
    return start;
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
struct node *create_list(struct node *start)
{
    int n,data,i=0;
    cout<<"enter the no of nodes u wanna enter\n";
    cin>>n;
    if(n<1)
    {
        puts("the program terminates");
        exit(1);
    }
    cout<<"enter data\n";
    cin>>data;
    start=addtoempty(start,data);
    for(i=2; i<=n; i++)
    {
        cout<<"enter data\n";
        cin>>data;
        start=addatbegin(start,data);
    }
    return start;
}

struct node *insertion(struct node *start2,int n)
{
    struct node *p=start2;
    if(p==NULL)
    {
        start2=addtoempty(start2,n);
    }
    else
        start2=addatbegin(start2,n);
    return start2;
}
int main()
{  int r,carry=0;
    struct node *start1=NULL;
    struct node *start2=NULL;
     struct node *start3=NULL;
    start1=create_list(start1);
    start2=create_list(start2);
    struct node *p1=start1;
    struct node *p2=start2;
    while(p1!=NULL&&p2!=NULL)
    {
       r=p1->info+p2->info+carry;
        carry=0;
        if(r<10)
            start3=insertion(start3,r);
        if(r>=10)
        {
            start3=insertion(start3,r%10);
            carry=r/10;
        }
        p1=p1->link;
        p2=p2->link;
    }
    while(p1!=NULL)
    {
        r=p1->info+carry;
        carry=0;
         if(r<10)
            start3=insertion(start3,r);
        if(r>=10)
        {
            start3=insertion(start3,r%10);
            carry=r/10;
        }
        p1=p1->link;
    }
      while(p2!=NULL)
    {
        r=p2->info+carry;
        carry=0;
         if(r<10)
            start3=insertion(start3,r);
        if(r>=10)
        {
            start3=insertion(start3,r%10);
            carry=r/10;
        }
        p2=p2->link;
    }
    if(carry!=0)
    start3=insertion(start3,carry);
    cout<<"heres the added list\n";
    display(start3);
    return 0;
}











