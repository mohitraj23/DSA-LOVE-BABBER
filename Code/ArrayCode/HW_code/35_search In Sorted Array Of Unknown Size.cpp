#include<bits/stdc++.h>
using namespace std;

//code for find element in a sorted array of unknown size
int binarySearch(int arr[], int s, int e, int target)
{
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[mid] == target)
        return mid;

        else if(target < arr[mid])
        e=mid-1;

        else
        s=mid+1;
    }
    return -1;
}

//we dont know the size of array, 
// considering it infinite as per question
//assumption array size if infinite, so no Index Out of Bound Exception
int findPos(int arr[], int target)
{
    int s=0, e=1;
    int val=arr[s];

    while(val < target)
    {
        s=e;
        e=2*e;
        val = arr[e];
    }
    return binarySearch(arr, s, e, target);
}

int main()
{
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,
                               140, 160, 170};
    int ans = findPos(arr, 10);
    if (ans==-1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    return 0;
}