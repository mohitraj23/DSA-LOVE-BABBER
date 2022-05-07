#include<bits/stdc++.h>
using namespace std;

void pairSum(int arr[], int n, int target)
{
    int j=n-1;
    for(int i=0; i<n; i++)
    {
    sort(arr, arr+n);
    if(arr[i] + arr[j] == target)
    cout<<i<<" "<<j<<endl;

    else if(arr[i] + arr[j] > target)
    j--;

    else
    i++;
}
}

int main()
{
    int arr[] = {8,6,1,5,4};
    int n=5;
    int target=5;
    pairSum(arr, n, target);
    return 0;
}