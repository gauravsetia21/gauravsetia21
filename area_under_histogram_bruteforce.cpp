#include<bits/stdc++.h>
using namespace std;
int main()
{   int h=0;
    int a[7]={3,2,5,6,1,4,4};
    int area[7]={0};
    int area1,area2,minimum;
   if(a[0]>a[1])
    minimum=a[1];
   else
    minimum=a[0];
    for(int i=0;i<6;i++)
    {    minimum=a[i];
        area1=a[i];
        for(int j=i+1;j<7;j++)
        {
            if(a[j]<minimum)
                minimum=a[j];
            area2=(j+1-i)*minimum;
            if(area2>area1)
                area1=area2;
        }
        area[i]=area1;
    }
   area[6]=a[6];
   int *p;
  // p=max_element(&a[0],&a[7]);
    //cout<<*p<<endl;
    for(int k=0;k<7;k++)
        cout<<area[k]<<endl;
    return 0;
}
