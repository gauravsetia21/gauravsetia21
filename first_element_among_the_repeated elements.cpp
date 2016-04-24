#include<bits/stdc++.h>
using namespace std;
int main()
{
      int minimum=-1;
    int n;
    cin>>n;
    int arr[n+1];
    memset(arr,0,n+1);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool hashing[10000];
    memset(hashing,false,10000);

    for(int i=n-1;i>=0;i--)
    {
        if(hashing[arr[i]]==true)
            minimum=i;
        else
            hashing[arr[i]]=true;
    }
    if(minimum==-1)
        cout<<"No such element\n";
    else
        cout<<endl<<arr[minimum]<<endl;
    return 0;
}
