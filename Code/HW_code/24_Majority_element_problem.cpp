#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{
    //step1: store count of numbers
    unordered_map<int,int> count;
    for(int i=0; i<n; i++)
    {
        int currentElement = arr[i];
        count[currentElement]++;
    }

    //step2: traverse array and find the ans
    for(int i=0; i<n; i++)
    {
        int currentElement = arr[i];
        if(count[currentElement] >=n/2)
        return currentElement;
    }
    return -1;
}

int main()
{
    int arr[]={3,1,3,3,2};
    int n = 5;
    cout<<majorityElement(arr, n);

    return 0;
}