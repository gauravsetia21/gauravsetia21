#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 6
void spiralprint(int m,int n,int a[R][C])
{
   /* in this question firstly take the initial and final row,col indexes and iterate the
      first row followed by last col then last row followed by first column and then increase the strting row no and starting col no and decrease
      ending row and colno so that we can iterate through the inner loops*/

      /*
        k=starting row index
        m=now of rows or ending row no
        l=starting cloumn index
        n=now of col or ending col no
        */
        int i=0,k=0,l=0;
        while(k<m&&l<n)
        {
            for(i=k;i<n;i++)
                {
                    cout<<a[k][i]<<endl;
                }
            k++;
            for(i=k;i<m;i++)
            {
                cout<<a[i][n-1]<<endl;
            }
            n--;
            if(k<m)
            {


               for(i=n-1;i>=l;i--)
               {
                   cout<<a[m-1][i]<<endl;
               }
            m--;
            }
            if(l<n)
            {


              for(i=m-1;i>=k;i--)
               {
                   cout<<a[i][l]<<endl;
               }
            l++;

            }
        }

        }
int main()
{
    int a[R][C]={  1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18
                                    };
    spiralprint(R,C,a);
    return 0;
}











