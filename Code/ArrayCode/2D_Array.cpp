#include<iostream>
using namespace std;

bool search(int arr[3][3], int target, int row, int col){
    for(int i=0; i<row; i++)
        //for each row
        {
            for(int j=0; j<col; j++)
            {
                if(arr[i][j]==target)
                {
                    return true;
                }
            }
        }
        return false;
}

int main()
{
    //creation
    int arr[3][3];

    //initialse with 0
    int arr1[3][3]={0};
    //initialise first element with 1 and rest 0
    int arr2[3][3]= {1,2,3,4,5,6,7,8,9};
    //initialsing 2-D array
    int arr3[3][3]= {{1,2}, {2,3}, {3,5}};
    int n=3;

    //Input
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //Print matrix
    for(int i=0; i<n; i++)
    {
        //for 
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Ok"<<endl;
    

   cout<<"Search 9: "<<search(arr2, 9, 3, 3)<<endl;
    return 0;
}