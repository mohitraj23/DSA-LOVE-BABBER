#include<bits/stdc++.h>
using namespace std;

int main() {

    //creation
    queue<int> q;

    //push element
    q.push(3);
    q.push(5);
    q.push(8);
    q.push(9);

    //remove element  - 3
    q.pop();

    //front element
    cout << "printing front element " << q.front() << endl;

    //size of queuue
    cout << "Size of Queue is: " << q.size() << endl;

    //check q is empty or not
    cout << "Empty or not " << q.empty() << endl;

    cout << "Printing Queue: " << endl;
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;



    return 0;
}