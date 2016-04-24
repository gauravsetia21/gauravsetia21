#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
int arr[100];
int last_index=-1;

void heapify1()          // max heap(insertion heapification)
{
    int i=last_index;
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

void insert_heap(int data)    //max heap
{
    arr[++last_index]=data;
    heapify1();
}

void heapify2() //deletion heapification
{
    int i=0;  //starting index
    int j=(2*i)+1;
    int k=(2*i)+2;
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
    int chaska=arr[0];       //chaska stores the maximum value of heap
    arr[0]=arr[last_index];
    last_index--;
    heapify2();
    return chaska;
}


int main()
{
    int n,data;
    cout<<"enter the no of elements u wanna enter in the heap\n";
    cin>>n;
    for(int p=0; p<n; p++)
    {
        cin>>data;
        insert_heap(data);
    }
    cout<<"max heap is\n";
    for(int i=0; i<n; i++)    //printing max heap
    {
        cout<<arr[i]<<"\t";
    }
    int r;
    r=delete_heap();
    n--;
    cout<<"\nmax element is:\t::"<<r<<endl;
      for(int i=0; i<n; i++)    //printing max heap
    {
        cout<<arr[i]<<"\t";
    }
    r=delete_heap();
    n--;
    cout<<"\nsecond max element is:\t::"<<r<<endl;
     for(int i=0; i<n; i++)    //printing max heap
    {
        cout<<arr[i]<<"\t";
    }
     r=delete_heap();
     n--;
    cout<<"\nthird max element is:\t::"<<r<<endl;
     for(int i=0; i<n; i++)    //printing max heap
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}












