#include<bits/stdc++.h>
using namespace std;

//Kadane's Algo:-
int getMaxSubarraySum(int arr[], int n){
    int ans = INT_MIN;
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        //include current element
        sum = sum + arr[i];
        
        //update the ans
        ans = max(ans, sum);

        //if max ending here is 0, then don't include
        if(sum < 0)
          sum = 0;
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,3,3,2,1};
    cout<<"Max Subarray sum is "<<getMaxSubarraySum(arr,6)<<endl;
    return 0;
}