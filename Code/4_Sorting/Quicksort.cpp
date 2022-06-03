#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    //taking first element as pivot 
    int pivot = arr[s];

    //count smaller elements
    int count = 0;
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i] < pivot)
        count++;
    }

    //find right place for pivot
    int pivotindex = s+count;

    //swap
    swap(arr[pivotindex] , arr[s]);

    //handle left and rtight
    // we want all lesser element on left side
    // and greater element on right side of pivotIndex
    int i=s, j=e;
    while(i < pivotindex && j > pivotindex)
    {

    //already smaller element in left side
    while(arr[i] <= pivot)
    {
        i++;
    }

    //already greater element in right side
    while(arr[j] > pivot)
    {
        j--;
    }
    if(i < pivotindex && j > pivotindex)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    }
    return pivotindex;
}

void quicksort(int arr[], int s, int e)
{
    //base case
    if(s>=e)
    return;

    int Pindex = partition(arr, s, e);
    
    //left
    quicksort(arr, s, Pindex);

    //right
    quicksort(arr, Pindex+1, e);
}

int main()
{
    int arr[]={1,2,9,8,6,5,5,5};
    int n = 8;
    quicksort(arr, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}