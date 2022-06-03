#include <bits/stdc++.h>
using namespace std;

string ReverseWord(string str)
{
    reverse(str.begin(), str.end());
    return str;
}

void Reverse(char arr[])
{
    int n=strlen(arr);
    int s=0, e=n-1;

    while(s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    string str = "Mohit Raj";
    cout<<ReverseWord(str)<<endl;

    char arr[]={"Mohit Raj"};
    Reverse(arr);
    cout<<arr<<endl;
    return 0;
}