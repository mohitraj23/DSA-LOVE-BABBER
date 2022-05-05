//Link:-https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1/

#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int target)
{
    int s=0; //s= start
    int e=n-1; //e= end
    int ans=-1;

    while(s<=e)
    {
        int mid = s + (e-s)/2;
        int midElement = arr[mid];
    
    //Element found
    if(midElement==target)
    {
     ans=mid;
     e=mid-1;
    }
    
    //check left part only
    else if(target<midElement)
    e=mid-1;
    
    //check right part only
    else
    s=mid+1;
    }
    return ans;
}

int lastOcc(int arr[], int n, int target)
{
    int s=0; //s= start
    int e=n-1; //e= end
    int ans=-1;

    while(s<=e)
    {
        int mid = s + (e-s)/2;
        int midElement = arr[mid];
    
    //Element found
    if(midElement==target)
    {
     ans=mid;
     s=mid+1;
    }
    
    //check left part only
    else if(target<midElement)
    e=mid-1;
    
    //check right part only
    else
    s=mid+1;
    }
    return ans;
}


int main()
{
    int arr[]={2,3,4,4,4,7,8,9};
    int n=8;
    int target=4;
    int ans =1;
    
    ans=lastOcc(arr, n, target) - firstOcc(arr, n, target) + 1;
    cout<<ans<<endl;

    return 0;
}