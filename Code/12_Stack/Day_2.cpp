#include<bits/stdc++.h>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s, int data) {
    //base case
    if(s.empty() || s.top() < data) {
        s.push(data);
        return ;
    }

    int topElement = s.top();
    s.pop();

    //Recursive call
    sortedInsert(s,data);

    s.push(topElement);
}

void sortStack(stack<int>& s) {
    //base case;

    if(s.empty()) {
        return;
    }

    int topElement = s.top();
    s.pop();

    //Recursive Call
    sortStack(s);

    //sortedInsert 
    sortedInsert(s, topElement);

}

bool checkRedundant(string s) {

    stack<char> st;

    for(int i=0; i<s.length();i++) {

        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if(ch == ')') {
            bool isRedundant = true;

            while(st.top() != '(') {
                char top = st.top();

                if(top == '+' || top == '-' || top == '*' || top == '/')
                    isRedundant = false;

                st.pop();
            }

            if(isRedundant == true)
                return true;
            st.pop();
        }
    }
    return false;
}

vector<int> nextSmaller(vector<int> arr) {
    stack<int> s;
    s.push(-1);

    int n = arr.size();
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) {
        int item= arr[i];

        while(s.top() >= item) {
            s.pop();
        }

        //push in ans
        ans[i] = s.top();
        s.push(item);
    }
    return ans;
}


vector<int> prevSmaller(vector<int> arr) {
    stack<int> s;
    s.push(-1);

    int n = arr.size();
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        int item= arr[i];

        while(s.top() >= item) {
            s.pop();
        }

        //push in ans
        ans[i] = s.top();
        s.push(item);
    }
    return ans;
}

int main() {

    stack<int> s;

    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);

    //functioncall
    sortStack(s);

    cout << "Printing answer" << endl;
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}