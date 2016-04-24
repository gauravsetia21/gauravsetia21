#include<bits/stdc++.h>
using namespace std;
#define MAX 6
int top=-1;
int stack_array[MAX];
void push(int x)
{

    stack_array[++top]=x;
}
void pop()
{
   top--;
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
int main()
{  int x;
    int a[6]={6,3,4,5,2,0};
    push(0);
    cout<<"span of  "<<a[0]<<" is "<<1<<endl;
    for(int i=1;i<6;i++)
    {   x=peer();
        while(!isempty()&&a[i]>a[x])
           {
            pop();
              x=peer();
           }
        int r=peer();
         cout<<"span of  "<<a[i]<<" is "<<(i-r)<<endl;

        push(i);

    }
    return 0;
}














