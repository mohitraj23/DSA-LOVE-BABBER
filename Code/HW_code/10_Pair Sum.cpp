#include<bits/stdc++.h>
using namespace std;

void PairSum(int arr[], int n , int target)
{
    int ans = 0;
    int i = 0;
    int j = i+1;
    while(i<n && j<n)
        {
            ans = arr[i]+arr[j];
            if(ans == target)
            {
                cout<<arr[i]<<" "<<arr[j];
            }
            i++;
            j++;
        }    
    }

int main()
{
    int arr[6] = {1,2,2,4,5,6};
    PairSum(arr,6,6);
    return 0;
}