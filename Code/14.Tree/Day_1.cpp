#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};


Node* buildTree() {
    cout << "Enter the value of data " << endl;
    int data;
    cin >> data;

    if(data == -1) 
        return NULL;

    Node* newNode = new Node(data);

    cout << "Enter the data for left child of " << data << endl;
    newNode -> left = buildTree();

    cout << "Enter the data for right child of " << data << endl;
    newNode -> right = buildTree();

    return newNode;

}

void preOrder(Node* root) {
    //base case
    if(root == NULL)
        return;

    //N
    cout << root->data << " ";
    //L
    preOrder(root->left);
    //R
    preOrder(root->right);
}

void inOrder(Node* root) {
    //LNR
    //base case
    if(root == NULL)
        return;

    //L
    inOrder(root->left);
    //N
    cout << root->data << " ";
    //R
    inOrder(root->right);
}

void postOrder(Node* root) {
    //LNR
    //base case
    if(root == NULL)
        return;

    //L
    postOrder(root->left);
    //R
    postOrder(root->right);
    //N
    cout << root->data << " ";

}

void lvlOrderTraversal(Node* root) {

    queue<Node*> q;
    q.push(root);
    //change no. 1
    q.push(NULL);

    while(!q.empty()) {
        //tu nikal
        Node* front = q.front();
        q.pop();
        if(front == NULL) {
            cout << endl;
            //catch here
            if(!q.empty())//still elements are present
                q.push(NULL);
        }
        else{
            cout << front->data << " ";

            //bache chor jaio
            if(front->left != NULL)
                q.push(front->left);
            if(front->right != NULL)
                q.push(front->right);
        }
    }
}


int height(Node* root ) {
    if(root == NULL)
        return 0;
    
    int leftAns = height(root->left);
    int rightAns = height(root->right);
    return 1+max(leftAns, rightAns);
}

int main() {

    Node* root = NULL;

    root = buildTree();
    cout << "Printing PreOrder " << endl;
    preOrder(root);
    cout << endl;
    
    cout << "Printing Inorder " << endl;
    inOrder(root);
    cout << endl;

    cout << "Printing PostOrder " << endl;
    postOrder(root);
    cout << endl;

    cout << "Printing Level Order " << endl;
    lvlOrderTraversal(root);
    cout << endl;

    cout << "Height os tree is: " << height(root) << endl;


    return 0;
}