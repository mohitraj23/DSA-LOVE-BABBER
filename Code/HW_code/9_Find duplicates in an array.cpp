#include<iostream>
using namespace std;

int duplicateNo(int arr[], int n)
{
    int sum1=0;
    for(int i=0; i<n; i++)
    {
        sum1= sum1 + arr[i];
    }
    int sum2 = n * (n+1)/2;
    int ans = sum1 - sum2;
    return ans;
}


int main()
{
    int arr[] = {8,6,5,5,4,4};
    int n=6;
    cout<<duplicateNo(arr, n)<<endl;
    return 0;
}