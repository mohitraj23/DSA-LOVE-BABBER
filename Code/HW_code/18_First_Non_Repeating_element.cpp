#include<bits/stdc++.h>
using namespace std;

int firstNonRepeating(int arr[], int n)
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
        if(count[currentElement] == 1)
        return currentElement;
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,5,9,3};
    int n = 6;
    cout<<firstNonRepeating(arr, n);

    return 0;
}