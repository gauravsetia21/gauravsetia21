#include<bits/stdc++.h>
using namespace std;
 int n;
void swap(int&x,int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
void chaska(int x,int*a)
{  int k;
    if(x)
	{
		for(int j=0;j<x;j++)
		{k=j+1;
		if(a[j]>a[k])
		{ swap(a[j],a[k]);
		}
		}
		x=x-1;
		 return (chaska(x,a));
	}
   else
   {	for(int i=0;i<n;i++)
	{ cout<<a[i];
	}
   }
}
int main()
{
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{ cin>>a[i];
	}
	int y=n-1;
	chaska(y,a);
	return(0);

}
