#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int number=n-1;
    int arr1[n];
    int arr2[n];
    int hashing[n+1];
    memset(hashing,0,sizeof(hashing));
    int cost[number];
    for(int i=0; i<number; i++)
        cin>>cost[i];
    sort(cost,cost+number);
    for(int i=1; i<n; i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    for(int i=1; i<n; i++)
    {
       // if(i==arr1[i])
            hashing[arr1[i]]+=1;
      //  if(i==arr2[i])
            hashing[arr2[i]]+=1;
    }
    int *y;
    int ct=0;
    y=max_element(&hashing[0],&hashing[n+1]);

    for(int i=1;i<=n;i++)
    {
        if(hashing[i]==*y)
            ct++;
    }

    int sum=0;
    for(int i=0;i<(*y);i++)
        sum=sum+cost[i];
       int yo=ceil(ct/2);
        cout<<endl<<yo;
  //  int total=(yo*sum)+(cost[0]*(number-(*y)-floor(ct/2)));
    //cout<<"\n"<<total<<"\n";

    return 0;
}




