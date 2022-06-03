#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j;
        for(j=i-1; j>=0; j--)
        {
            //shifting
            if(arr[j]> temp)
            arr[j+1] = arr[j];

            else
            break;
        }
        //place at right position
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {2,9,6,1};
    int n = 4;
    insertionSort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}