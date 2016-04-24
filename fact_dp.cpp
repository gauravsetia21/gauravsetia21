/*
 * C++ Program to Find Factorial of a Number using Dynamic Programming
 */
#include <cstring>
#include <iostream>
#include <cstdlib>
#define ll long long
#define c 1589540031
using namespace std;

ll int result[500000] = {0};
/*
 * Find Factorial of a Number using Dynamic Programming
 */
ll fact_dp(ll int n)
{
    if (n>=0)
    {
        result[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            result[i] = (i * result[i - 1])%c;
        }
        return result[n];
    }
}
/*
 * Main
 */
int main()
{
   ll int t;
    cin>>t;
    while(t--)
    {
      ll int n;
        cin>>n;
        if (n == 0)
           cout<<"1\n";
           else

        cout<< fact_dp(n)<<endl;
    }
    return 0;
}
