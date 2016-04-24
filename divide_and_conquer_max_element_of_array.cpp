#include<bits/stdc++.h>
#define min_INF -1000000000

using namespace std;

int arr[1000000];
int find_maximum(int low,int high)
{
    if (low>high) return min_INF;
    int mid=(low+high)>>1;
    if(low==high)
        return arr[low];
    int chaska=find_maximum(low,mid);
    int maska=find_maximum(mid+1,high);
    return chaska>maska?chaska:maska;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int r;
    r=find_maximum(0,n-1);
    cout<<"\n"<<r<<endl;
    return 0;
}

