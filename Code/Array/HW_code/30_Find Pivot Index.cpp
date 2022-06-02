#include<bits/stdc++.h>
using namespace std;

//youtube vala hai min nikala hai isme
int getPivotMin(int arr[], int n) {

    int s = 0;
    int e = n-1;

    while(s<e) {
            int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

// //Live class vala hai Max nikala hai isme
// int FindPivotMax(int arr[], int n)
// {
//     int s=0;
//     int e=n-1;

//     while(s<=e)
//     {
//         int mid = s + (e-s)/2;

//         //also check mid
//         if(mid<e && arr[mid]>arr[mid+1])
//         return mid;

//         //also check mid in range
//         if(mid>0 && arr[mid] < arr[mid-1])
//         return mid;

//         if(arr[s] >= arr[mid])
//         e = mid-1;

//         else
//         s = mid+1;
//     }
//     return 0;
// }

//youtube vala hai max nikala hai isme
int getPivotMax(int arr[], int n) {

    int s = 0;
    int e = n-1;

    while(s<e) {
            int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s-1;
}


int main() {
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Min Pivot is " << getPivotMin(arr, 5) << endl;
    cout<< "Max Pivot is "<<getPivotMax(arr,5) <<endl;
}