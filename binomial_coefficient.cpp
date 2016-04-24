#include<bits/stdc++.h>
using namespace std;
int c=0;
int recursion(int n,int k)
{
	if(k==1||(n-k)==1)
	return n;
	if(n==k)
	return 1;
	int c=recursion(n-1,k-1)+recursion(n-1,k);
	return c;
}
int main()
{
	int n,k;
	cin>>n>>k;
    c=recursion(n,k);
    cout<<c;
	return 0;
	
}
