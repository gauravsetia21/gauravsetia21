#include<bits/stdc++.h>
using namespace std;
int main()
{    int i,j,p,x=0,y=0;
	int arr[11]={36,41,56,35,44,33,34,92,43,32,42};
	bool hash[10000];
	memset(hash,false,10000);
	for(i=0;i<11;i++)
	{ p=arr[i];
	  hash[p]=true;
	}
	for(int j=0;j<11;j++)
	{   x=0;
		p=arr[j]-1;
		if(hash[p]==false)
		{
			for(i=p+1;;i++)
			{ if(hash[i]==true)
			      x++;
			      else
				   break;
			}
		}
		if(x>y)
		y=x;
	}
	
	cout<<y;
	
	return 0;
	
	
	
	
}
