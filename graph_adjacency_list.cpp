//for directed graph
#include<bits/stdc++.h>
using namespace std;
struct vertex
{
    int info;
    struct vertex *nextvertex;
    struct edge *firstedge;
}*start=NULL;
struct edge
{
    struct edge *nextedge;
    struct vertex *destvertex;
};

struct vertex *findvertex(int loc)
{
    struct vertex *ptr1;
    ptr1=start;
    while(ptr1->info!=loc)
        ptr1=ptr1->nextvertex;
    return ptr1;
}

// insert a vertex
void insertvertex()
{
    cout<<"Enter the vertex no or value\n";
    int u;
    cin>>u;
    struct vertex *tmp,*ptr;
    tmp=(struct vertex *)malloc(sizeof(struct vertex));
    tmp->info=u;
    tmp->nextvertex=NULL;
    tmp->firstedge=NULL;
    if(start==NULL)
    {
        start=tmp;
        return;
    }
    ptr=start;
    while(ptr->nextvertex!=NULL)
        ptr=ptr->nextvertex;
    ptr->nextvertex=tmp;
}
void insertedge()
{
    cout<<"insert the two vertexes of the directed graph where u want to do the insertion\n";
    int loc1,loc2;
    cin>>loc1>>loc2;
    struct vertex *ptr1,*ptr2;
    ptr1=findvertex(loc1);
    ptr2=findvertex(loc2);
    struct edge *tmp1;
    tmp1=(struct edge *)malloc(sizeof(struct edge));
    tmp1->destvertex=ptr2;
    tmp1->nextedge=NULL;
    if(ptr1->firstedge==NULL)
        ptr1->firstedge=tmp1;
    else
    {
        struct edge *traversal;
        traversal=ptr1->firstedge;
        while(traversal->nextedge!=NULL)
            traversal=traversal->nextedge;
        traversal->nextedge=tmp1;

    }

}
void deleteedge()
{
    int loc1,loc2;
    cout<<"jis jiske beech ki edge delete karni hai un vertexes ke number bharo\n";
    cin>>loc1>>loc2;
    struct vertex *ptr1,*ptr2;
    ptr1=findvertex(loc1);
    struct edge *ptr,*par=NULL;
    ptr=ptr1->firstedge;
    if(ptr->destvertex->info==loc2)
    {
        ptr1->firstedge=NULL;
        free(ptr);
        return;
    }
    while(ptr->destvertex->info!=loc2)
    {
        par=ptr;
        ptr=ptr->nextedge;
    }
    par->nextedge=ptr->nextedge;
    free(ptr);
}
void display()
{
    struct vertex *ptr;
    struct edge *q;
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<endl;
        q=ptr->firstedge;
        while(q!=NULL)
        {
            cout<<q->destvertex->info<<"\t";
            q=q->nextedge;
        }
        cout<<endl;
        ptr=ptr->nextvertex;
    }
}
int main()
{
    for(int i=0;i<4;i++)
    {
        insertvertex();
    }
    for(int i=0;i<7;i++)
    {
        insertedge();
    }
    deleteedge();
    cout<<"----------------------------\n";
    display();
    return 0;
}







