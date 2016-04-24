#include<bits/stdc++.h>
using namespace std;

struct node
{   int info;
    struct node *link;
};
struct node *addtoempty(struct node *start,int data)
{
   struct node *tmp;
   tmp=(struct node *)malloc(sizeof(struct node));
   start=tmp;
   tmp->link=NULL;
   tmp->info=data;
   return start;
}
struct node *addatend(struct node *start,int data)
{
      struct node *tmp,*p;
   tmp=(struct node *)malloc(sizeof(struct node));
   p=start;
   while(p->link!=NULL)
        p=p->link;

   p->link=tmp;
    tmp->info=data;
   tmp->link=NULL;
   return start;
}
struct node *create_list(struct node *start)
{   int n=0,data;
    cout<<"enter the no of nodes u want to enter"<<endl;
     cin>>n;
     start=NULL;
    if(n==0)
    {
       cout<<"list not formed";
      return start;
}
    cout<<"enter the data element"<<endl;
    cin>>data;
    start=addtoempty(start,data);
    for(int i=2;i<=n;i++)
     {
         cout<<"enter the data element"<<endl;
    cin>>data;
    start=addatend(start,data);
     }
   return start;

}
void display(struct node *start)
{     struct node *p=start;
    while(p!=NULL)
    {
        cout<<p->info<<"\n";
        p=p->link;
    }
}
void selection(struct node *start)  //implementatioj of selection sort of values
{
    struct node *p,*q;
    int tmp;
      p=start;
    for(p=start;p->link!=NULL;p=p->link)
    {
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(p->info>q->info)
            {
                tmp=p->info;
                p->info=q->info;
                q->info=tmp;
            }
        }

    }
      display(start);
}//end of sort

struct node *selectionlinks(struct node *start) //selection sort by exchanging links
{
     struct node *p,*q,*r,*s,*tmp;

        for(r=p=start;p->link!=NULL;r=p,p=p->link)
        {
            for(s=q=p->link;q!=NULL;s=q,q=q->link)
                if(p->info>q->info)
            {
                tmp=p->link;
                p->link=q->link;
                q->link=tmp;
                if(p!=start)
                    r->link=q;
                s->link=p;
                if(p==start)
                    start=q;
                tmp=p;
                p=q;
                q=tmp;

            }
        }
         display(start);
    return start;
}



int main()
{
   struct node *start=NULL;
   start=create_list(start);
  start=selectionlinks(start);
   return 0;



}






















