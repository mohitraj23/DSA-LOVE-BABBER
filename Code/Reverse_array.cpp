#include<iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int i=0;
    int j= n-1;

    while(i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {3,5,7,6,9,2};
    reverseArray(arr, 6);

    for(int i=0; i<6; i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}