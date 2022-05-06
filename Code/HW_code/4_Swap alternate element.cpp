#include<iostream>
using namespace std;

void SwapAlternates(int arr[], int n)
{
    int i=0;
    while(i<n)
    {
    if(i+1 < n)
    {
      swap(arr[i], arr[i+1]);
    }
      i= i+2;
    }
}

int main()
{
    int arr[] = {0,1,2,1,0,2};
    SwapAlternates(arr,6);
    for(int i=0; i<6; i++)
    {
       cout<<arr[i] <<" ";
    }

    return 0;
}