#include<bits/stdc++.h>
using namespace std;

void TripletSum(int arr[], int n , int target)
{
    int pairSum = 0;
    int i = 0;
    int j = i+1;
    int k = i+2;
    while(i<n && j<n && k<n)
        {
            pairSum = arr[i]+arr[j]+arr[k];
            if(pairSum == target)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
            }
            i++;
            j++;
            k++;
        }    
    }

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    TripletSum(arr,6,6);
    return 0;
}