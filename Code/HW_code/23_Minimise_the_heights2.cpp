#include<bits/stdc++.h>
using namespace std;

int minHeight(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int mini=arr[0];
    int maxi=arr[n-1];
    int ans = maxi-mini;

    for(int i=1; i<n; i++)
    {
        mini=min(arr[0]+k, arr[i]-k);
        maxi= max(arr[n-1]-k, arr[i-1]+k);
        ans= min(maxi-mini, ans);
    }
    return ans;
}

int main()
{
    int arr[]={1,5,8,10};
    int n=4;
    int k=2;
    cout<<minHeight(arr, n, k);
    return 0;
}