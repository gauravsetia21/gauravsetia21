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
struct node *deleteatbegin(struct node *start)
{
    struct node *p=start;
    struct node *tmp;
    tmp=p;
    start=p->link;
    free(tmp);
    return start;

}

struct node *deleteinbetween(struct node *start,int n)
{
    struct node *p=start;
    struct node *tmp;
    while(p->link!=NULL)
    {
        if(p->link->info==n)
        {
            tmp=p->link;
            p->link=tmp->link;
            free(tmp);
            return start;
        }
        p=p->link;
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
        start2=addatend(start2,n);
    return start2;
}
int main()
{   int ct=0,data;
    struct node *start=NULL;
    struct node *start2=NULL;
    start=create_list(start);
    struct node *p=start;

      while(p!=NULL)
    {    ct=0;
        if((p->info)%2!=0)
        {
                   start2=insertion(start2,p->info);
           if(p==start)
           {
               ct=1;
           p=p->link;
            start=deleteatbegin(start);
           }
            if(p!=start)
           {
               ct=1;
           data=p->info;
           p=p->link;
            start=deleteinbetween(start,data);
           }

        }
        if(ct==0)
        p=p->link;
    }
 p=start;
 while(p->link!=NULL)
 {
     p=p->link;
 }
 p->link=start2;
 cout<<"heres ur modified linked list\n";
 display(start);
    return 0;

}








