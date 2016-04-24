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
      if(start==NULL)
      {
          cout<<"list is empty";
      }
    p=start;
    while(p!=NULL)
    {
        cout<<p->info<<endl;
        p=p->link;
    }
}
void count(struct node *start)
{       int ct=1;
    struct node *p;
     if(start==NULL)
      {
          cout<<"list is empty";
      }
      while(p!=NULL)
           {
               p=p->link;
               ct++;
           }
     cout<<ct<<endl;
}
void search(struct node *start,int item)
{    int pos=1,r=0;
    struct node *p=start;
      while(p!=NULL)
      {
          if(p->info==item)
          {
              cout<<"match found at position no::"<<pos<<endl;
              r++;
          }
          pos++;
            p=p->link;
      }
      if(r==0)
        cout<<"MATCH NOT FOUND";
}
struct node *addatbeg(struct node *start,int data)
{
    struct node *tmp;
      tmp=(struct node *)malloc(sizeof(struct node));
         tmp->info=data;
       tmp->link=start;
        start=tmp;
        return start;
}






































