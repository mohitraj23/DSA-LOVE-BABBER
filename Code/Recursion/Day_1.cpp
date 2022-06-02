#include<iostream>
using namespace std;

int factorial(int n) {
    //base case
    //assuming n > 0
    if(n == 1) {
        return 1;
    }

    return n * factorial(n-1);
}

void print(int n) {
    //base case
    if(n < 1) 
    {
        return;
    }

    //RR
    print(n-1);

    //processing
    cout << n << " ";

}

int expo( int n) {
    //BaSE CASE
    if( n == 0) 
        return 1;

    int smallerProblemAns = expo(n/2);

    if(n&1)
        return smallerProblemAns * smallerProblemAns * 2;
    else
        return smallerProblemAns * smallerProblemAns;
}

int main() {
    
    // int n;
    // cout << "enter the value of n " << endl;
    // cin >> n;

    //cout << "Factorial of n is " << factorial(n) << endl;

    // print(5);
    // cout << endl;
    cout << "ans is " << expo(11) << endl;

    return 0;
}
