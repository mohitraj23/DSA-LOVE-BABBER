//Link:-https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1   //bina binary ke hoga yeh ques.

#include<bits/stdc++.h>
using namespace std;

int FixedPoint(int arr[], int n)
{
    int s=0; //s= start
    int e=n-1; //e= end
    int mid;
    while(s<=e)
    {
        mid = s + (e-s)/2;
        int midElement = arr[mid];
    
    //Element found
    if(midElement==mid)
    return mid;
    
    //check left part only
    else if(mid<midElement)
    e=mid-1;
    
    //check right part only
    else
    s=mid+1;
    }
    return mid;
}


int main()
{
    int arr[]={1, 2, 2, 2, 5};
    int n=5;

    cout<<"Fixed Point is at "<<FixedPoint(arr,n)<<endl;

    return 0;
}