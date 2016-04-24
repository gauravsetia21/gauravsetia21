#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 500000
ll int arr[MAX];
ll int last_index=-1;

void heapify1()          // max heap(insertion heapification)
{
    ll int i=last_index;
    ll int j=floor((i-1)/2);
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

void insert_heap(int data)    //max heap
{
    arr[++last_index]=data;
    heapify1();
}

void heapify2() //deletion heapification
{
    ll int i=0;  //starting index
    ll int j=(2*i)+1;
    ll int k=(2*i)+2;
    while(k<=last_index)
    {
        if(arr[i]>arr[j]&&arr[i]>arr[k])
        {
            return;
        }
        else if(arr[j]>arr[k])
        {
            swap(arr[i],arr[j]);
            i=j;
        }
        else
        {
            swap(arr[i],arr[k]);
            i=k;
        }
        j=(2*i)+1;
        k=(2*i)+2;
    }
    if(j<=last_index)
    {
        if(arr[i]<arr[j])
            swap(arr[i],arr[j]);
    }
}

int delete_heap()
{
    ll int chaska=arr[0];       //chaska stores the maximum value of heap
    arr[0]=arr[last_index];
    last_index--;
    heapify2();
    return chaska;
}

void chaska()
{
    ll int a=delete_heap();
   ll int b=delete_heap();
    ll int c=delete_heap();
    ll int d=a*b*c;
    cout<<d<<endl;
    insert_heap(a);
    insert_heap(b);
    insert_heap(c);
}



int main()
{
    ll int n,data;
    cin>>n;
    for(ll int p=0; p<n; p++)
    {
        cin>>data;
        insert_heap(data);
        if(p<2)
            cout<<"-1\n";
        else
            chaska();
    }

}











