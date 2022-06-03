#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n) 
{
    int ans;
    sort(arr, arr+n);
    for(int i = 0; i<n; i++ ) {
        if(arr[i-1]==arr[i])
        {
            ans=arr[i-1];
            break;
        }
    }
    return ans;
} 

int main()
{
    int arr[] = {1,2,3,3,2,1};
    cout<<"Duplicate No. is : "<<findDuplicate(arr,6)<<endl;
    return 0;
}