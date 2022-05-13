#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool swapped;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
        //best case ke liye lgayege kyuki break kr jayega to loop n baar nhi chlega.
        if(swapped == false)
        break;
    }
}

int main()
{
    int arr[] = {2,9,6,1};
    int n = 4;
    BubbleSort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}