#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    sort(arr, arr+n);
    sort(dep, dep+n);
    int i=1;
    int j=0;
    int ans=1;
    int platform = 1;

    while(i<n && j<n)
    {
        if(arr[i] <= dep[j])
        {
            platform++;
            ans = max(ans, platform);
            i++;
        }

        else
        {
        platform--;
        j++;
        }
    }
    return ans;
}

int main()
{
    int n=6;
    int arr[n];
    int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout<<findPlatform(arr, dep, n);
    return 0;
}