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
struct node *creation(struct node *start3,int data)
{
    if(start3==NULL)
        start3=addtoempty(start3,data);
    else
        start3=addatend(start3,data);
    return start3;
}


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


void mergesort(struct node *start1,struct node *start2)
{
    struct node *start3=NULL;
    struct node *p1,*p2;
    p1=start1;
    p2=start2;
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->info>p2->info)
        {
            start3=creation(start3,p2->info);
            p2=p2->link;
        }
        else if(p2->info>p1->info)
        {
            start3=creation(start3,p1->info);
            p1=p1->link;
        }
        else if(p1->info==p2->info)
        {
            start3=creation(start3,p1->info);
            p1=p1->link;
            p2=p2->link;
        }
    }
    while(p1!=NULL)
    {
        start3=creation(start3,p1->info);
        p1=p1->link;
    }
    while(p2!=NULL)
    {
        start3=creation(start3,p2->info);
        p2=p2->link;
    }
    display(start3);
}

int main()
{
    struct node *start1=NULL;
    struct node *start2=NULL;
    start1=create_list(start1);
    start2=create_list(start2);
    mergesort(start1,start2);
    return 0;
}



















