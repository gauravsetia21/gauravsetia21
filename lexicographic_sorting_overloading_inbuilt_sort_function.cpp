#include<bits/stdc++.h>
using namespace std;
struct node
    {
        char x[100];
    }obj[10];
 bool operator < (node a,node b)
{
    if(strcmp(a.x,b.x)<0)
        return true;
    else
        return false;
}
int main()
{


    int n;
    cin>>n;
    char strings[10][100];
    for(int i=0;i<n;i++)
    {
        cin>>strings[i];
        strcpy(obj[i].x,strings[i]);
    }
   sort(obj,obj+n);
    for(int j=0;j<n;j++)
    {
        cout<<obj[j].x<<endl;
    }

    return 0;
}
