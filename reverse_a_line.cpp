#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[15][20];
    char chaska[1000];
    cin.getline(chaska,1000);
    int i=0;
    int j=0,k=0;
    int l = strlen(chaska);
    while(i<l)
    {
        k=0;
        while(chaska[i]!=' '&&i<l)
        {
            a[j][k++]=chaska[i++];
        }
        a[j][k]='\0';
        i++;
        j++;
    }
    for(int p=j-1; p>=0; p--)
    {
        cout<<a[p]<<" ";
    }
    return 0;
}
