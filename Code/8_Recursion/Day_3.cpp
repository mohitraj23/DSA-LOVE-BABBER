#include<iostream>
using namespace std;

void printPowerSet(string input, int index, string output) {
    //base condition
    if(index == input.length()) {
        cout << output << endl;
        return ;
    }

    char ch = input[index];

    //exclude ch
    printPowerSet(input, index+1, output);

    //include ch
    output.push_back(ch);
    printPowerSet(input, index+1, output);

}

void findCombinations(string input, int i, string output) {
    //base case
    if(i == input.length()) {
        cout << output << endl;
        return ;
    }

    char ch = input[i];
    //no space - put character without space
    output.push_back(ch);
    findCombinations(input, i+1, output);

    //with space - put character with space
    output.push_back(' ');
    
    if(input[i+1] != '\0')
    findCombinations(input, i+1, output);

}

void findSequences(int leftSum, int rightSum, char* output, int i, int j) {

    //base case
    if( i > j ) {
        if(leftSum == rightSum)
            cout << output << endl;
        return;
    }

    //put 0,0
    output[i] = '0';
    output[j] = '0';
    findSequences(leftSum, rightSum, output, i+1, j-1);

    //put 0,1
    output[i] = '0';
    output[j] = '1';
    findSequences(leftSum, rightSum+1, output, i+1, j-1);

    //put 1,0
    output[i] = '1';
    output[j] = '0';
    findSequences(leftSum+1, rightSum, output, i+1, j-1);

    //put 1,1
    output[i] = '1';
    output[j] = '1';
    findSequences(leftSum+1, rightSum+1, output, i+1, j-1);


}

int main() {

    // string str;
    // cout << "enter the string " << endl;
    // cin >> str;

    // string output = "";
    // printPowerSet(str, 0, output);
    
    // string str = "123";
    // string output = "";
    // int index = 0;
    // findCombinations(str, index, output);

    cout << "Enter the value of n " << endl;
    int n;
    cin >> n;

    char* arr = new char[2*n];

    findSequences(0, 0, arr, 0, 2*n-1);



    return 0;
}