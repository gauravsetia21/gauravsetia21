#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int sum=0,oldmaska=0,found=0;
        int n;
        cin>>n;
        int u[n+1];
          int v[n+1];
            int w[n+1];
              int arr[n+1];
        memset(u,0,sizeof(u));
        memset(v,0,sizeof(v));
        memset(w,0,sizeof(w));
        memset(arr,0,sizeof(arr));
        for(int i=1;i<n;i++)
        {
            cin>>u[i]>>v[i]>>w[i];
        }
      for(int i=1;i<n;i++)
      {
          sum=w[i];
          oldmaska=0;
          found=v[i];

          while(1)
          {
              for(int j=1;j<n;j++)
              {
                  if(u[j]==found)
                  {
                      if(w[j]>oldmaska)
                      {
                          oldmaska=w[j];
                          found=v[j];
                      }
                  }
              }
              if(oldmaska==0)
                break;
              sum=sum+oldmaska;
              oldmaska=0;
          }
          if(sum>arr[u[i]])
            arr[u[i]]=sum;
      }

  for(int i=1;i<=n;i++)
  {
      cout<<arr[i]<<endl;
  }


    }
return 0;
}
