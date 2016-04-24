#include<bits/stdc++.h>
using namespace std;
#define M 4
#define N 4
char a[9][9];
bool checking(int row,int col)
{
    int i=0,reset,j=0;
    for(i=1; i<=row; i++)

    {
        if(a[i][col]=='Q')
            return false;
    }
    for(i=1; i<=col; i++)

    {
        if(a[row][i]=='Q')
            return false;
    }
    reset=min(row,col)-1;
    for(i=(row-reset),j=(col-reset); i<=row&&j<=col; i++,j++)
    {
        if(a[i][j]=='Q')
            return false;
    }
    for(i=(row-reset),j=(col+reset); i<=row&&j>=col; i++,j--)
    {
        if(a[i][j]=='Q')
            return false;
    }
    return true;
}
void display()
{  int i,j;
      for(i=1;i<=8;i++)
      {
          for(int j=1;j<=8;j++)
            cout<<a[i][j]<<"\t";
            cout<<endl<<endl;
      }

exit(1);
}


void recursion(int i,int n)
{

    for(int j=1; j<=n; j++)
    {

        if(i>8)
        display();

        if(checking(i,j))
        {

           a[i][j]='Q';
            recursion(i+1,n);
        a[i][j]='.';
        }
    }


}

int main()
{
      int p,q;
      for(p=1;p<=8;p++)
      {
          for(int q=1;q<=8;q++)
           a[p][q]='.';
      }


   recursion(1,8);
return 0;
}












