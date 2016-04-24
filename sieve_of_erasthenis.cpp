#include<bits/stdc++.h>
using namespace std;
int main()
{    int x;
    cin>>x;
    bool prime[x];
    memset(prime,true,sizeof(prime));
    for(int p=2;p<=floor(sqrt(x));p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*2;i<=x;i+=p)
                prime[i]=false;
        }
    }
    for(int p=2;p<=x;p++)
    {
        if(prime[p])
            cout<<p<<endl;
    }
    return 0;
}
