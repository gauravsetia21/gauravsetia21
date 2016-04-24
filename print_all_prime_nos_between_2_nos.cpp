#include<iostream>
using namespace std;
int j;
int main()
{  int m,n,ct;
	cin>>m>>n;


	for(int i=m+1;i<=n-1;i++)
	 {
	     ct=0;
	     for(j=2;j<i;j++)
	     { if(i%j==0)
	        break;
	        if(i%j!=0)
	        ct++;
	     }
	     if(ct==(i-2))
	       cout<<endl<<i;
	     
}
	

}
