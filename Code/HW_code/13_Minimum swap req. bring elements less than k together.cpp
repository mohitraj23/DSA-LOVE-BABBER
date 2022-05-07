#include<bits/stdc++.h>
using namespace std;

int minSwap(int arr[], int n, int k)
{
    //find window size (count of numbers <= k)
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] <= k)
        cnt++;
    }
    //create first window
    int bad = 0;
    for(int i=0; i<cnt; i++)
    {
        if(arr[i]>k)
        bad++;
    }
    int ans=bad;
    //check for remaning windows
    for(int i=0, j=cnt; j<n; i++, j++)
    {
        //check old element
        if(arr[i]>k)
        bad--;

        else if(arr[j]>k)
        bad++;

        ans = min(ans, bad);
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,3,3,2,1};
    cout<<"minimum Swap is : "<<minSwap(arr,6, 2)<<endl;
    return 0;
}