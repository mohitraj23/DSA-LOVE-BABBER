#include <bits/stdc++.h>
using namespace std;
//Cyclically rotate an array by one

//User function Template for C++

void rotate(int arr[], int n)
{
    for(int i=n-1; i>0; i--)
    swap(arr[i], arr[i-1]);
}

int main()
{
        int n;
        cin>>n;
        int a[n] , i;
        for(i=0;i<n;i++)
        cin>>a[i];
        rotate(a, n);
        for (i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        return 0;
}