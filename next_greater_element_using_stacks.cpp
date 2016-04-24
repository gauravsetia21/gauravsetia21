#include<bits/stdc++.h>
using namespace std;
#define MAX 6
int top=-1;
int stack_array[MAX];
void push(int x)
{
    top+=1;
    stack_array[top]=x;
}
int pop()
{
    return(stack_array[top--]);
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void greater_element(int a[],int n)
{    push(a[0]);
    for(int i=1;i<n;i++)
    {
        int next=a[i];
        while(!isempty())
        {
            int r=pop();
            if(next>r)
            {
                cout<<"pair is  "<< r <<"  and   "<<next<<endl;
            }
            if(next<r)
            {
                push(r);
                break;
            }
        }
        push(next);
    }
    while(!isempty())
    {
        int r=pop();
         cout<<"pair is  "<< r <<"  and   "<<"-1"<<endl;
    }
}
int main()
{
    int a[MAX]={3,2,7,18,9,16};
    greater_element(a,MAX);
    return 0;


}








