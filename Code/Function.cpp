#include<iostream>
using namespace std;

void printEven(int n)
{
    for(int i=2; i<=n; i=i+2)
    {
        cout<<i<<endl;
    }  
}

void printSq(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<i*i<<" ";
    }
}

int getFactorial(int n)
{
    int ans = 1;
    for(int i=n; i>=1; i--)
    {
        ans = ans *i;
    }
    return ans;
}

int main()
{
   int n=3;
   printEven(n);
   printSq(n);
   int fact = getFactorial(5);
   cout<<endl<<fact<<endl;
    return 0;
}