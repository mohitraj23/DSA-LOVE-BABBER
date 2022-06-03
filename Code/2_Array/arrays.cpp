#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void util(int arr[], int size)
{
   arr[0]=23;
   cout<<"printing in util function"<<endl;
   printArray(arr, 4);
}


int main()
{
    //int arr1[10];

    int arr[5]={1,2,3,4,5};

    int arr3[]={1,2,3,4};

    //int arr[23]={0};
    util(arr3, 4);
    cout<<endl<<"printing in the main function "<<endl;
    printArray(arr,5);

    return 0;
}