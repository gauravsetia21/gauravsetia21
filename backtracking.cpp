#include<bits/stdc++.h>
using namespace std;
int c=0;
int recursion(int i,int mark[],char perm[])
{
     if(i==3)
     {   int s=i;
     c++;
         while(s--)
         cout<< perm[s];
         cout<<endl;
         return 0;
     }
     for(int j=0;j<26;j++)
     {
            if(mark[j]==0)
            {
                mark[j]=1;
                perm[i]=char(j+65);
                recursion(i+1,mark,perm);
                mark[j]=0;
            }
     }
return 0;

}


int main()
{
    int mark[50]={0};
    char a[50];
    recursion(0,mark,a);
    cout<<endl<<c<<endl;
    return 0;

}

