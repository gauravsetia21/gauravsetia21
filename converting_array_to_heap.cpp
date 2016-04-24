#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
int arr[100];
int last_index=-1;

void heapify1(int i)          // max heap(insertion heapification)
{

    int j=floor((i-1)/2);
    while(j>=0)
    {
        if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        else
            break;
        i=j;
        j=floor((i-1)/2);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
          cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        heapify1(i);
    }
     for(int i=0; i<n; i++)
    {
         cout<<arr[i]<<"\t";
    }
    return 0;
}




