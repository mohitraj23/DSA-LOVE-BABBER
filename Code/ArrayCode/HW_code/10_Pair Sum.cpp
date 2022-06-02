#include<bits/stdc++.h>
using namespace std;

void PairSum(int arr[], int n , int target)
{
    int i = 0;
    int j = i+1;
    while(i<n && j<n)
        {
            if(arr[i]+arr[j] == target)
            {
                cout<<arr[i]<<" "<<arr[j];
            }
            i++;
            j++;
        }    
    }

int main()
{
    int arr[6] = {2,1,2,3,3,9};
    PairSum(arr,6,6);
    return 0;
}