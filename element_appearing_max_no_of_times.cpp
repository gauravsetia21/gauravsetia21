#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,value,index,maximum=0,maximumindex;
    int a[n];
    for( i=0; i<n; i++)
        cin>>a[i];
    int arr[10000];
    memset(arr,0,sizeof(arr));
       for(i=0;i<n;i++)
       {
           arr[a[i]]++;
       }
  for(i=0;i<10000;i++)
  {
      if(arr[i]>0)
      {value=arr[i];
      index=i;
       if(value>maximum)
      {
          maximum=value;
          maximumindex=i;
      }
      }

  }
  cout<<"\n no appearing maximum no of times is\n"<<maximumindex<<"\n and its frequency is\n"<<maximum;
  return 0;
}
