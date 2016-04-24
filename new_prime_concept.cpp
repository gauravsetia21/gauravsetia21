#include<bits/stdc++.h>
using namespace std;
void printtwins(int,int);
int main()
{
	int low,high;
	cin>>low>>high;
	printtwins(low,high);
	return 0;
}
void printtwins(int low,int high)
{
	bool prime[high+1];
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int p=2;p<=floor(sqrt(high))+1;p++)
	{
         if(prime[p])		
		{
			for(int i=p*2;i<=high;i+=p)
			{
				prime[i]=false;
			}
				
		}	
		
	}
	for(int j=low;j<=high;j++)
	{
		if(prime[j]&&prime[j+2])
		{
		cout<<"twins are"<<j<<endl<<j+2;
	   break;
	}
	}
	

}
