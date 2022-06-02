#include<bits/stdc++.h>
using namespace std;

//this function only gives in integer results
long long int sqrtInteger(int n)
{
    int s=0;
    int e=n;
     long long int ans=-1;

     while(s<=e)
     {
         long long int mid = s + (e-s)/2;
         long long int square = mid*mid;

         if(square == n)
         return mid;

         else if(square<n)
         {
             ans = mid;
             s=mid+1;
         }

         else
         e=mid-1;
     }
     return ans;
}

//this is use for flot part result
double morePrecision(int n, int precision, int tempsol)
{
    double factor =1;
    double ans = tempsol;

    for(int i=0; i<precision; i++)
    {
        factor = factor/10;

        for(double j=ans; j*j<n; j=j+factor)
        ans = j;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;

    int tempsol = sqrtInteger(n);
    cout<<"Answer is "<<morePrecision(n, 3, tempsol);//here 3 is for 3 digits tk decimal chahiye apne ko..

    return 0;
}