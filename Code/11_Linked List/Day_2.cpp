#include<iostream>
using namespace std;

class Node {

    //Data Member are below:
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this->data  = data;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int d) {
        //step 1: create new node
        Node* newNode = new Node(d);
        //step2: set next ptr to head node
        newNode->next = head;
        //step3: head update;
        head = newNode;
}

void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
}

void insertAtPosition(Node* &head, int pos, int d) {
    //TODO: tail updation, while inserting node at the end
    //TODO: validate that position should 
    //be atmax 1 more than current Lenght of LL
    if(pos == 1) {
        insertAtHead(head,d);
    }
    else {
        //Step1: cration of New Node
        Node* newNode = new Node(d);

        //step2: 
        Node* prev = head;
        int t = pos-2;
        while(t--)
        {
            prev= prev->next;
        }

        //step3: connections update
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

void traverse(Node* &head) {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}


void deleteNode(Node* &head, int target, int pos) {

    //empty list
    if(head == NULL)
        return;

    Node* temp = head;
    Node* prev = NULL;
    if(target == temp->data && pos == 1){
        head  = head ->next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        while(temp != NULL && temp->data != target) {
            prev = temp;
            temp = temp->next;
        }
        //here we are assuiming that we have found the element

        if(temp == NULL)
            {
                cout << "NOde node found" << endl;
                return;
            }
        prev -> next = temp->next;
        temp ->next = NULL;
        delete temp;

    }

}

int getLength(Node* &head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    } return len;
}

Node* reverse(Node* &head) {

    if(head == NULL)
    {
        cout << "List is Empty" << endl;
        return head;
    }

    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL) {
        //to keep track of list ahead of curr
        Node* forward = curr->next;
        //change curr link and connect it to prev node
        curr->next = prev;

        //aage badho
        prev = curr;
        curr = forward;
    }

    return prev;
}

Node* reverseRec(Node* curr, Node* prev) {
    //base case
    if(curr == NULL) {
        return prev;
    }

    //connecttion chage - 1 case soolve kardia 
    Node* forward = curr -> next;
    curr->next = prev;

    //baaki recursion sambhal lega
    return reverseRec(forward, curr);
}

Node* getMiddle(Node* head) {

    if(head == NULL) {
        cout << "LIST iS empty" << endl;
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        //2 step
         fast = fast -> next ->next;
         //1 step
         slow = slow -> next;
    }
    return slow;
}

bool isCircular(Node* &head) {
    Node* temp = head;

    //to traverse the LL, in normal case
    while(temp != NULL) {

        //incase the list is circular
        if(temp->next == head) {
            return true;
        }
        //move one node ahead
        temp = temp ->next;
    }
    //it means we have traversed the entire list, return false
    return false;
}

Node* reverseInK(Node* &head, int k) {
    //empty list
    if(head == NULL)
    return NULL;

    Node* curr = head;
    Node* next = curr -> next;
    Node* prev = NULL;
    int count = 0;

    //Step 1: reverse first k nodes
    while(curr != NULL && count < k) {
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next; 
        count++;
    }

    //next pointer will be pointing at the head of the remaining list
    
    if(next != NULL){
        //step2:recursion will get ans for remaining list
        Node* rem = reverseInK(next, k);
        //step3: connection list in step 1 and step 3
        head -> next = rem;
    }
        
    //step 4: return head of entire list
    return prev;
}


Node* merge(Node* &head1, Node* &head2) {
    
    if(head1 == NULL)
        return head2;

    if(head2 == NULL)
        return head1;
    
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* dummy = new Node(-1);
    Node* tempDummy = dummy;

    while(temp1 != NULL && temp2 != NULL) {

        if(temp1 -> data <= temp2 ->data) {
            tempDummy -> next = temp1;
            tempDummy = temp1;
            temp1 = temp1->next;
        }
        else{
            tempDummy -> next = temp2;
            tempDummy = temp2;
            temp2 = temp2->next;
        }
    }

    //it is possible that elements are left in temp1 list
    while(temp1 != NULL) {
         tempDummy -> next = temp1;
            tempDummy = temp1;
            temp1 = temp1->next;
    }

        //it is possible that elements are left in temp2 list
    while(temp2 != NULL) {
         tempDummy -> next = temp2;
            tempDummy = temp2;
            temp2 = temp2->next;
    }

    
    Node* head = dummy->next;
    
    //delete dummy node
    dummy->next = NULL;
    delete dummy;

    return head;
}



int main() {

    //object creation

    // Node* b = new Node(3);
    // Node* head = b;
    // Node* tail = b;

    // insertAtTail(tail,5);
    // insertAtTail(tail,7);
    // insertAtTail(tail,9);
    // insertAtTail(tail,11);
    // insertAtTail(tail,13);
    // insertAtTail(tail,14);
    // insertAtTail(tail,15);



    // traverse(head);
    // insertAtPosition(head, 6, 12);
    // traverse(head);

    // Node* head2 = NULL;
    // deleteNode(head2, 13, 1);
    // traverse(head);
    // cout << "legnth: " << getLength(head) << endl;

    // // head = reverseRec(head, NULL);
    // // traverse(head);

    // Node* middle = getMiddle(head);
    // cout << "Middle is at " << middle->data << endl;
    // //to make circular
    // //head -> next  = head;
    // cout << "Circular or not " << isCircular(head) << endl;

    // traverse(head);
    // head = reverseInK(head, 3);
    // traverse(head);

    Node* head1 = new Node(1);
    Node* tail1 = head1;
    insertAtTail(tail1, 3);
    insertAtTail(tail1, 5);

    cout << "Priting first list " << endl;
    traverse(head1);

    Node* head2 = new Node(2);
     Node* tail2 = head2;
    insertAtTail(tail2, 4);
    insertAtTail(tail2, 6);
    insertAtTail(tail2, 8);
    insertAtTail(tail2, 10);

    traverse(head2);

    Node* head = merge(head1, head2);
    traverse(head);


    return 0;
}
