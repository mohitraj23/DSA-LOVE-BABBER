#include <bits/stdc++.h>
using namespace std;

string ReverseWord(string str)
{
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    string str = "Mohit Raj";
    cout<<ReverseWord(str);
    return 0;
}