#include<bits/stdc++.h>
using namespace std;
struct node
{
    int coeff;
    int expo;
    struct node *link;
};
 void display(struct node *ptr)
  {

      if(ptr==NULL)
      {
          cout<<"zero polynomial"<<endl;
          return;
      }
      while(ptr!=NULL)
      {
          printf("%d x to the power %d",ptr->coeff,ptr->expo);
          ptr=ptr->link;
            if(ptr!=NULL)
                cout<<"+";
            else
                cout<<endl;
      }
  }
struct node *descending(struct node *start)  //reverse selection sort lagaya hai ander
{
    struct node *p,*q;
    int tmp;
    p=start;
    for(p=start;p->link!=NULL;p=p->link)
    {
        for(q=p->link;q!=NULL;q=q->link)
        {
            if(q->expo>p->expo)
            {
                tmp=p->expo;
                p->expo=q->expo;
                q->expo=tmp;
            }
        }
    }
    return start;
}
struct node *addtoempty(struct node *start,int coeff,int expo)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
     tmp->coeff=coeff;
     tmp->expo=expo;
     tmp->link=NULL;
     start=tmp;
    return start;
}
struct node *addatend(struct node *start,int coeff,int expo)
{
    struct node *p,*tmp;
    p=start;
      tmp=(struct node *)malloc(sizeof(struct node));
      while(p->link!=NULL)
        p=p->link;
      p->link=tmp;
      tmp->link=NULL;

     tmp->coeff=coeff;
     tmp->expo=expo;
      return start;
}
struct node *create_list(struct node *start)
{
   int n,coeff,expo;
   struct node *p=start;
      cout<<"enter the no of nodes u wanna enter\n";
      cin>>n;
      while(n--)
      {
      if(p==NULL)
      {
          cout<<"enter coefficient and exponential value\n";
          cin>>coeff>>expo;
          start=addtoempty(start,coeff,expo);
      }
      else
      {
           cout<<"enter coefficient and exponential value\n";
          cin>>coeff>>expo;
           start=addatend(start,coeff,expo);
      }
      }
      start=descending(start);
      return start;
}

  struct node *creation(struct node *start,int coeff,int expo)
  {
   struct node *p=start;
   if(p==NULL)
        start=addtoempty(start,coeff,expo);
   else
    start=addatend(start,coeff,expo);
    descending(start);
   return start;
  }
void poly_add(struct node *start1,struct node *start2)
{    struct node *start3=NULL;
    struct node *p=start1;
    struct node *q=start2;
    while(p!=NULL&&q!=NULL)
    {
    if(p->expo>q->expo)
    {
        start3=creation(start3,p->coeff,p->expo);
           p=p->link;
    }
      if(q->expo>p->expo)
    {
        start3=creation(start3,q->coeff,q->expo);
           q=q->link;
    }
    if(p->expo==q->expo)
    {
        start3=creation(start3,p->coeff+q->coeff,q->expo);
        p=p->link;
        q=q->link;
    }
    }
    while(p!=NULL)
    {
        start3=creation(start3,p->coeff,p->expo);
        p=p->link;
    }
     while(q!=NULL)
    {
        start3=creation(start3,q->coeff,q->expo);
        q=q->link;
    }
     display(start3);

}



  int main()
  {
      struct node *start1,*start2;
      start1=NULL;
      start2=NULL;
      start1=create_list(start1);
      start2=create_list(start2);
      poly_add(start1,start2);
      return 0;
  }














