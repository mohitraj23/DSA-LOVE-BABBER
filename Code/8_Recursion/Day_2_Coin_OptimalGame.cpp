#include<iostream>
using namespace std;

int solve(int coins[], int n, int amount, int currentCoin) {
    //base case
    if(amount == 0 )
        return 1;

    if( amount < 0) 
        return 0;

    int ways = 0;

    //use every coin
    for(int i = currentCoin; i<n; i++) {
        ways += solve(coins, n, amount - coins[i], i);
    }    

    return ways;
}

int optimalStrategy(int arr[], int i, int j) {
    //base case
    if(i > j) 
        return 0;

    int choice1 = arr[i] + min(optimalStrategy(arr,i+2, j),
                            optimalStrategy(arr, i+1, j-1) );

    int choice2 = arr[j] + min( optimalStrategy(arr, i+1, j-1),
                                optimalStrategy(arr, i, j-2));

    int ans = max(choice1, choice2);
    return ans;                           
}


int main() {

    // int coins[] = {1,2};
    // int amount = 4;
    // int size = 2;

    // int ans = solve(coins, size, amount, 0);
    // cout << ans << endl;

    int arr[] = {20,30,2,2,2,10};
    int i = 0;
    int j = 5;
    cout << "Ans is  " << optimalStrategy(arr, i, j) << endl;


    return 0;
}