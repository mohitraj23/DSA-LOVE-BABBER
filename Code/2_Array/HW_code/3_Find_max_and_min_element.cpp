#include<bits/stdc++.h>
using namespace std;

int getMaxFromArray(int arr[], int n)
{
    int ans= INT_MIN;
    for(int i=0; i<n; i++)
    {
        ans= max(ans, arr[i]);
    }
    return ans;
}

int getMinFromArray(int arr[], int n)
{
    int ans= INT_MAX;
    for(int i=0; i<n; i++)
    {
        ans= min(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int arr[] = {3,5,7,6,9,2};
    cout<<"Maximum value is: "<<getMaxFromArray(arr,6)<<endl;
    cout<<"Minmum value is: "<<getMinFromArray(arr,6)<<endl;

    return 0;
}