#include<bits/stdc++.h>
using  namespace std;

int factExp(int x, int n)
{
    int res = 1;
    while(n>0)
    {
        //odd
        if(n&1)
        res = res*x;
        x = x*x;
        n = n >> 1;
    }
    return res;
}

int main()
{
    cout<<factExp(2,7)<<endl;
    return 0;
}