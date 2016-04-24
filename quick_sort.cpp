#include<bits/stdc++.h>
using namespace std;
int arr[200];
int placepivot(int low,int up)
{
    int pivot=arr[low];
    int i=low+1;
    int j=up;
    while(i<=j)
    {


    while(pivot>arr[i]&&i<up)
        i++;
    while(pivot<arr[j])
    {
        j--;
    }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else
            i++;
    }
    arr[low]=arr[j];
    arr[j]=pivot;
    return j;
}
void quicksort(int low,int up)
{    int j;
    if(low>=up)
        return;
     j=placepivot(low,up);
    quicksort(low,j-1);
    quicksort(j+1,up);
}
int main()
{
    cout<<"enter the size of array\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quicksort(0,n-1);
    cout<<"\nsorted array is\n";
    for(int j=0;j<n;j++)
    cout<<arr[j]<<"\t";
    return 0;

}





