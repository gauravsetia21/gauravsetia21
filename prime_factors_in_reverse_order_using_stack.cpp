#include<bits/stdc++.h>
using namespace std;
int top=-1;
int stack_array[1000];
void push(int);
int main()
{
    int n=0;
    cin>>n;
    while(n%2==0)
    {
    push(2);
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
           push(i);
            n=n/i;
        }
    }

    if(n>2)
        push(n);
          for(int i=top;i>=0;i--)
    {
        cout<<stack_array[i]<<endl;
    }
    return 0;
}
void push(int item)
{     top=top+1;
      stack_array[top]=item;
}


