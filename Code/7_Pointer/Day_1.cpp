#include<iostream>
using namespace std;

void func(int * p) {
    *p = *p + 1;
}
void dummy(int *arr, int n) {
    cout << sizeof(arr) << endl;
}
int main() {

    // int a = 5;
    // //create a pointer
    // int *p = &a;
    // cout << *a << endl;

    // cout << sizeof(p) << endl;

    // int *ptr = 0;
    // cout << *ptr << endl;

    // int a = 5;
    // int *p = &a;

    // cout << "Before " << p << endl;
    // cout << "Before " << *p << endl;
    // func(p);
    // cout << "after " << p << endl;
    // cout << "after " << *p << endl;

    // int arr[] = {1,2,3,4,5};
    // int *p = arr;
    // cout << p << endl;

    // char ch[5] = "abcd";
    // char *ptr = ch;
    // cout << ptr << endl;

    // char charac = 'B';
    // char *ctr = &charac;
    // cout << ctr << endl;


    //dummy(arr,5);
    // cout << *arr << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(arr + 2) << endl;
    // cout << *(arr + 3) << endl;
    // cout << *(arr + 4) << endl;
    // int i = 0;
    // cout << i[arr] << endl;
    // cout << arr << endl;
    // cout << *arr << endl;

    // cout << &arr[0] << endl;
    // cout << &arr << endl;


    // //Q1
    // int *p1;
    // cout << p1 << endl;
    // cout << *p1 << endl;
    // cout << &p1 << endl;

    // //Q2
    // int *p2 = 0;
    // cout << p2 << endl;
    // cout << *p2 << endl;
    // cout << &p2 << endl;

    char sentence[] = "My name is Gabbar";
    char *ptr = sentence;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;

    return 0;
}