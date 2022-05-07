#include<iostream>
using namespace std;
bool binarySearch(int arr[][3],int n,int m,int row,int target)
{
    int s = 0;
    int e = m-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(arr[row][mid] == target)
        {
        cout<<row<<" "<<mid<<endl;
        return true;
        }
        else if(arr[row][mid]<target)
        {
        s = mid +1;
        }
        else
        {
        e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
bool search(int arr[][3], int n, int m , int target)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        
        //for starting row 
        if(arr[mid][0]==target)
        {
            return true;
        }
        //for ending col
        if(arr[mid][m-1]==target)
        {
            return true;
        }
        // in between row and col
        if(target > arr[mid][0] && target < arr[mid][m-1])
        {
            int ans = binarySearch(arr,n,m,mid,target);
            return ans;
        }
        //upper side
        if(arr[mid][0]>target)
        {
        e = mid -1;
        }
        //down side
        if(arr[mid][m-1]<target)
        {
        s = mid + 1;
        }
        mid = s+(e-s)/2;  
               
}
 return false;
}
int main()
{
    int arr[3][3]= {1,5,9,14,20,21,30,34,43};
    int n = 3;
    int m = 3;
    int target = 5;
    cout<<search(arr, n,m,target);
    return 0;
}