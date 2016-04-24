#include<bits/stdc++.h>
using namespace std;
int top=-1;
void push(int);
int stack_array[8];
int main()
{
    int x=0;
    cout<<"enter the decimal no\n";
    cin>>x;
    while(x!=1)
    {  push(x%2);
    x=x/2;
    }
    push(x);
    cout<<"in binary\n";
    for(int i=top;i>=0;i--)
    {
        cout<<stack_array[i];
    }
    return 0;
}
void push(int item)
{     top++;
    stack_array[top]=item;
}
