#include<bits/stdc++.h>
 using namespace std;

int largeFactorial(int num)
{
    int ans=1;
    int arr[1000];
    int carry = 0;
    for(int i=1; i<num; i++)
    {
        ans = arr[i] * num + carry;
        int digit = ans % 10;
        carry = ans/10;
    }
    return ans;
}

 int main()
 {
     int num=5;
     cout<<largeFactorial(num);

     return 0;
 }