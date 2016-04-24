#include<iostream>
using namespace std;
int main()
{     int a[10];
    int b[5];
	int ct=0;
	int k=0;
	cin>>a[10];
	cout<<endl<<"bharo";
	cin>>b[5];
	for(int j=0;j<=5;j++)
	      {   ct=0;
		  k++;
		  for(int i=j+4;j>=k;j--)
		  { if(a[i]==b[i])
             ct++;
			 else
			 break;                		  }   
	        if(ct==5)
			cout<<"match found";                
							
							
							
							}
return(0);	
}
