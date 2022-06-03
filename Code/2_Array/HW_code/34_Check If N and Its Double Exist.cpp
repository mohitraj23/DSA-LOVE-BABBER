#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int s, int e, int target)
{
    while(s<=e)
    {
        int mid = s + (e-s)/2;

        if(arr[mid] == target)
        return true;

        else if(arr[mid] < target)
        s = mid +1;

        else
        e = mid-1;
    }
    return false;
}

bool checkIfExist(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        //positive number
        if(arr[i] >= 0 && binarySearch(arr, i+1, n-1, 2*arr[i]))
        return true;

        //negative number
        if(arr[i] < 0 && arr[i]%2 == 0 && binarySearch(arr, i+1, n-1, arr[i]/2))
        return true;
    }
    return false;
}


int main()
{
    int arr[]={3,1,7,11};
    int n=4;
    cout<<checkIfExist(arr, n);
    return 0;
}