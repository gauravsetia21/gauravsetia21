#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int maxi=30000;
	int mini=-30000;
	
	int p=0;
	int q=n-1;
	while(p<q)
	{      int temp=a[p]+a[q];
         if(temp>0)
		 {
		 	if(temp<maxi)
		 	    maxi=temp;
		 	q--;
		 }		
		else if(temp<0)
		{
			if(temp>mini)
			     mini=temp;
			     p++;
			
		}
		else
		{cout<<"closest sum is nothing but zero!!!!HURRAHHH\n";
		}
		
		
		
	}
maxi=abs(maxi);
mini=abs(mini);
if(maxi>mini)
cout<<"----------------------------------------------\n"<<mini<<endl;
if(maxi<mini)
cout<<"---------------------------------------\n"<<maxi<<endl;
return 0;
	

}


