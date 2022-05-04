#include<bits/stdc++.h>
using namespace std;

//LINK:- https://leetcode.com/problems/binary-search/submissions/

//STL Function of Binary Search
//binary_search(arr, arr+n, target);

int binarySearch(int arr[], int n, int target)
{
    int s=0; //s= start
    int e=n-1; //e= end

    while(s<=e)
    {
        int mid = s + (e-s)/2;
        int midElement = arr[mid];
    
    //Element found
    if(midElement==target)
    return mid;
    
    //check left part only
    else if(target<midElement)
    e=mid-1;
    
    //check right part only
    else
    s=mid+1;
    }
    return -1;
}


int main()
{
    int arr[]={2,3,4,5,6,7,8,9};
    int n=8;
    int target=9;

    // if(binarySearch(arr, n, target))
    // {
    //     cout<<"Element found"<<endl;
    // }
    // else 
    // cout<<"Element Not Found"<<endl;
    cout<<binary_search(arr, arr+n, target)<<endl;//STL Predefine Function
    cout<<binarySearch(arr, n, target)<<endl;

    return 0;
}