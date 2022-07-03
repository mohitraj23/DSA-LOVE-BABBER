#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int>& st, int totalSize) {
    
    if( (totalSize/2) + 1 ==  st.size()) {
        cout << "Middle is " << st.top() << endl;
        return;
    }

    //step1
    int topElement = st.top();
    st.pop();

    //step2
    printMiddle(st, totalSize);


    //step3
    st.push(topElement);

}

void insertAtBottom(stack<int> &st, int item) {
    //base case
    if(st.empty())
    {
        st.push(item);
        return;
    }

    //step1
    int topElement = st.top();
    st.pop();

    //step2: recursive call
    insertAtBottom(st, item);

    //step3:
    st.push(topElement);

}


void reverse(stack<int>& st) {
    //base case
    if(st.empty())
        return;
    
    //step1:
    int topElement = st.top();
    st.pop();

    //step2
    reverse(st);

    //step3:
    insertAtBottom(st, topElement);
}


int main() {

    stack<int> st;
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);

    //printMiddle(st, st.size());

    insertAtBottom(st, 15);
    reverse(st);



//another prog..
    while(!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    int n;
    cin >> n;

    stack<int> s;

    while(n-- ) {
        int data;
        cin >> data;
        s.push(data);
    }

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}