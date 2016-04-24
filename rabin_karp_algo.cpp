#include<bits/stdc++.h>
using namespace std;
int len1,len2;
int hashvalue(char *p)
{
    int sum=0;
    for(int i=0; i<len2; i++)
    {
        int x=*p;
        int y=x*pow(7,i);   //instead of 7 take any prime no to avoid collision during hashing like 101 doing this also take long long int
        sum=sum+y;
        p++;
    }
    return sum;
}

int main()
{
    char daddy[100];
    char puttar[10];
    cin>>daddy;
    cin>>puttar;
    len1=strlen(daddy);
    len2=strlen(puttar);
    int maska=hashvalue(&puttar[0]);
    int chaska=hashvalue(&daddy[0]);

     char *a,*b;
      a=&daddy[0];
      b=a+len2;
    while(1)
    {
        if(chaska==maska)
        {
            cout<<"match found\n";

            return 0;
        }
        else
           {   int r=*a;
               chaska=chaska-r;
               chaska=chaska/7;   //rolling hash
               int s=*b;
               s=s*pow(7,(len2-1));
               chaska+=s;
               a++;
               if(*b=='\0')
               {
                cout<<"match not found";
                return 0;}
                else
                    b++;
           }

        }
        return 0;

}





