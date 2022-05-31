#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<"Size of array is"<<n<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

recSum(int arr[], int n)
{
    print(arr,n);
    cout<<endl;
    int sum=0;
    if(n==0)
    return 0;

    if(n == 1)
    return arr[0];

    sum = arr[0] + recSum(arr+1, n-1);

    return sum;

}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;

    cout<<recSum(arr,n);

    return 0;
}