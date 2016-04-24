#include <bits/stdc++.h>
using namespace std;

long long int exp(long long int a,long long int b,long long int m){
    if (b==0) return 1;
    if (b%2==1) return (a*exp(a,b-1,m))%m;
    long long int p = exp(a,b/2,m);
    return (p*p)%m;
}

int main()
{   long long int t;
cin>>t;
while(t--)
{
   long long int n,k;
     cin>>n>>k;
    long long int chaska=0;
    chaska=(k*exp(k-1,n-1,1000000007))%1000000007;
    cout<<chaska<<endl;
}
return 0;
}
