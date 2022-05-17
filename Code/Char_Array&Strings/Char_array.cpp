#include<iostream>
using namespace std;

int getLength(char arr[])
{
    int length=0;
    int index=o;
    while(arr[index] != '\0')
    {
        length++;
        index++;
    }
    return length;
}

int main()
{
    //creation
    char name[10];
    char name2[10]="Mohit";

    //input
    cin>>name;

    //print
    cout<<name<<endl; 
    cout<<name2<<endl;

    return 0;
}