#include<bits/stdc++.h>
using namespace std;

int findPeak(int arr[], int n)
{
    int s=0;
    int e=n-1;

    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid]< arr[mid+1])
        s=mid+1;

        else
        e=mid;
    }
    return s;
}

int main()
{
    int arr[]={1,2,1,3,5,6,4};
    int n=7;
    cout<<"Mountain peak: "<<findPeak(arr,n);
    return 0;
}