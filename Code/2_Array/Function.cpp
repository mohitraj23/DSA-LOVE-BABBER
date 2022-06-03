#include<iostream>
using namespace std;

void printEven(int n)
{
    for(int i=2; i<=n; i=i+2)
    {
        cout<<i<<" ";
    }  
}

void printSq(int n)
{
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<i*i<<" ";
    }
}

int getFactorial(int n)
{
    cout<<endl;
    int ans = 1;
    for(int i=n; i>=1; i--)
    {
        ans = ans *i;
    }
    cout<< ans;
    return 0;
}

void printFib(int n)
{
    cout<<endl;
    int a=0;
    int b=1;
    cout<<0<<" "<<1<<" ";

    for(int i=1; i<=n-2; i++)
    {
        int sum = a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}

int main()
{
   int n;
   cin>>n;
   printEven(n);
   printSq(n);
   getFactorial(n);
   printFib(n);
    return 0;
}