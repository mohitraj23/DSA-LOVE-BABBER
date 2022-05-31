#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s+e)/2;

    int leflen = mid - s + 1;
    int riglen = e - mid;

    //create  left and right parts
    int *left = new int[leflen];
    int *right = new int[riglen];

    //copy into left array
    int originalIndex = s;
    for(int i=0; i<leflen; i++)
    {
        left[i] = arr[originalIndex++];
    }

    //copy into right array
    originalIndex = mid+1;
    for(int i=0; i<riglen; i++)
    {
        right[i] = arr[originalIndex++];
    }

    // now we have 2 sorted arrays 
    // we have to merge them
    int lefindex = 0;
    int rigindex = 0;
    originalIndex = s;

    //compare elements from left and right array and copy into original array
    while(lefindex < leflen && rigindex < riglen)
    {
        if(left[lefindex] <= right[rigindex])
        {
            arr[originalIndex++] = left[lefindex++];
        }
        else
        {
        arr[originalIndex++] = right[rigindex++];
        }
    }

    //check if any more element is present in left array ,
    // then copy it to original array
    while(lefindex < leflen)
    {
        arr[originalIndex++] = left[lefindex++];
    }

    //check if any more element is present in right array ,
    // then copy it to original array
    while(rigindex < riglen)
    {
        arr[originalIndex++] = right[rigindex++];
    }
    delete []left;
    delete []right;
}

void mergesort(int arr[], int s, int e)
{
    //base case
    if(s>=e)
    return;

    int mid = (s+e)/2;

    //left part
    mergesort(arr, s, mid);

    //right part
    mergesort(arr,mid+1,e);

    //merge 2 sorted parts
    merge(arr,s,e);
}


int main()
{
    int arr[]={2,6,3,8,1,2,2};
    int n = 7;
    mergesort(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}