#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int top=-1;
int stack_array[MAX];
void push(int x)
{

    stack_array[++top]=x;
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
int peer()
{
      if(isempty())
      {
         return -1;
      }
    return(stack_array[top]);
}
void printing()
{
    if(isempty())
        return;
    char p=pop();
    printing();
    cout<<p;
}


int main()
{
   char string1[100];
    cin>>string1;
    int len1=strlen(string1);
    push(string1[0]);
    for(int i=1;i<len1;i++)
    {
        if(string1[i]==peer())
        {
            if(!isempty())
                int yu=pop();
        }
        else
            push(string1[i]);
    }
    printing();
    return 0;
}












