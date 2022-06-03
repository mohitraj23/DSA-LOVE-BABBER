#include<iostream>
using namespace std;

//Move all -ve no. to side of array
void MoveNegative(int arr[], int n)
{
    int j=0;
    for(int i=0; i<n; i++)
    {
        if (arr[i] < 0) {
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    cout<<"Move negative no.: "<<endl;
    MoveNegative(arr, 9);
    for(int i=0; i<9; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}