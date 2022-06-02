#include<iostream>
using namespace std;

//sort 0's , 1's , 2's
void sortZeroOneTwo(int arr[], int n)
{
    int one=0, zero=0, two=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        zero++;
        else if(arr[i]==1)
        one++;
        else
        two++;
    }
    int i=0;
    //put Zero
    while(zero--)
    {
        arr[i] = 0;
        i++;
    }
    //put one
    while(one--)
    {
        arr[i] = 1;
        i++;
    }
    //put Zero
    while(two--)
    {
        arr[i] = 2;
        i++;
    }
}

int main()
{
    int arr[] = {0,1,2,1,0,2};
    sortZeroOneTwo(arr,6);
    for(int i=0; i<6; i++)
    {
       cout<<arr[i] <<" ";
    }
    return 0;
}