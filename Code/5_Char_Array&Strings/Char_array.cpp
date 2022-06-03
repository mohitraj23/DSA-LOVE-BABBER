#include<bits/stdc++.h>
using namespace std;

int getLength(char arr[])
{
    int length=0;
    int index=0;
    while(arr[index] != '\0')
    {
        length++;
        index++;
    }
    return length;
}

void reverse(char arr[])
{
    int n = strlen(arr);
    int s = 0, e = n-1;
    
    while(s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    //creation
    char name1[10];
    char name[10]="Mohit";

    //input
    cin>>name1;

    //print
    cout<<name<<endl; 
    cout<<strlen(name)<<endl;
    cout<<strcmp(name, name1)<<endl;
    reverse(name);
    cout<<"Reverse name is:"<<name<<endl;

    return 0;
}