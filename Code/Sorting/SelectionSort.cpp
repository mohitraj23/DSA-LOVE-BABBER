#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    //find min element
    for(int i=0; i<n; i++)
    {
        int  minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[minIndex] > arr[j])
                minIndex = j;
        } 
            swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[]={5,3,2,6};
    int n=4;
    selectionSort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}