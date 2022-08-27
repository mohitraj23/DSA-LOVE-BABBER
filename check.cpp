#include <bits/stdc++.h>

using namespace std;


bool isprime(int n)
{
    int count =0;
        for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        count++;
    }
     
     if(count == 2)
     return true;
     
     else 
     return false;
}

int main()
{
    int n;
    
    cout<<"Enter Number: "<<endl;
    cin>>n;
    
    isprime(n);
    
    
   return 0;
}