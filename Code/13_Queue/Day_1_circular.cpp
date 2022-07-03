#include<iostream>
#include<queue>
using namespace std;

class Queue {

    public:
        int* arr;
        int front;
        int rear;
        int size;

        Queue(int n) {
            arr = new int[n];
            front = 0;
            rear = 0;
            size = n;
        }

        void push(int element) {
            if(rear == size) {
                cout << "OverFlow hogya " << endl;
                return;
            }
            else{
                arr[rear] = element;
                rear++;
            }
        }

        void pop() {
            if(front == rear) {
                cout << "UnderFlow hogya " << endl;
                return;
            }
            else {
                arr[front] = -1;
                front++;
                if(front == rear)
                {
                    front = rear = 0;
                }
            }
        }

        bool isEmpty() {
            if(front == rear) 
                return true;
            else
                return false;
        }

        int getSize() {
            //galat hai
            return rear-front;
        }

        int getFront() {
            if(front == rear)
                return -1;
            else
                return arr[front];
        }


};

class CircularQueue{

    public:
    int* arr;
    int front;
    int rear;
    int size;


    CircularQueue(int s) {
        arr = new int[s];
        front = rear = -1;
        size = s;
    }

    void enqueue(int element) {
        //OverFlow
        if( (front == 0 && rear == size -1) || (rear == (front-1)%size) ) {
            cout << "OverFlow hogya " << endl;
            return;
        }
        else if(front == -1) {
            //first element insertion
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0) {
            //handle circular insertion case
            rear = 0;
        }
        else {
            //normal insetion case -> no corner case
            rear++;
        }

        arr[rear] = element;
    }

    void dequeue() {
        //underflow
        if(front == -1 ) {
            cout << "Underflow hogya " << endl;
            return ;
        }
        else if(front == rear) {
            //single element
            front = rear = -1;
        }
        else if(front == size -1) {
            //circular nature
            front = 0;
        }
        else {
            //normal flow
            front++;
        }
    }

    bool isEmpty() {
        if(front == -1)
            return true;
        else
            return 0;
    }

    int getFront() {
        if(front == -1)
            return -1;
        else
            return arr[front];
    }

};


int main() {

    CircularQueue* q = new CircularQueue(5);

    q->enqueue(3);
    q->enqueue(5);
    q->enqueue(7);
    q->enqueue(9);
    q->enqueue(11);

    q->dequeue();
    q->enqueue(13);
    
     cout << "Front element " << q->getFront() << endl;

     q->dequeue();

     cout << "Front element " << q->getFront() << endl;
    
    q->enqueue(15);

    while(!q->isEmpty()) {
        cout << q->getFront() << " ";
        q->dequeue();
    }
    cout << endl;




    // Queue* q = new Queue(5);

    // q->push(3);

    // q->push(5);
    
    // q->push(7);

    // q->push(9);

    // cout << "front element is " << q->getFront() << endl;

    // q->pop();
    // cout << "front element is " << q->getFront() << endl;

    // cout << "Size of queue is " << q->getSize() << endl;

    // cout << "empty or not " << q->isEmpty() << endl;


    // cout << "printing all elements inside Queue " << endl;

    // while(!q->isEmpty()) {
    //     cout << q->getFront() << " ";
    //     q->pop();
    // }
    // cout << endl;
    



    return 0;
}