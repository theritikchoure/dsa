#include <iostream>

using namespace std;

class Queue {
    private: 
        int front;
        int rear;
        int arr[10];

    public:
        Queue() {
            front = -1;
            rear = -1;

            // when a new queue is created, all the elements in the queue are zero
            for(int i = 0; i < 10; i++) {
                arr[i] = 0;
            }
        }

        bool isEmpty() {
            if(front == -1 && rear == -1) {
                return true;
            } else {
                return false;
            }
        }

        bool isFull() {
            if(rear == 9) {
                return true;
            } else {
                return false;
            }
        }

        void enqueue(int x) {
            // overflow condition
            if(isFull()) {
                cout << "Queue overflow!" << endl;
                return;
            }

            if(isEmpty()) {
                front = 0;
                rear = 0;

                arr[rear] = x;
                return;
            }

            rear++;

            arr[rear] = x;
        }

        int dequeue() {
            int popValue;

            if(isEmpty()) {
                cout << "Queue underflow!" << endl;
                return 0;
            }

            if(front == rear) {
                popValue = arr[front];

                front = rear = -1;
                return 0;
            }

            popValue = arr[front];
            front++;

            return popValue;
        }

        int count() {
            if(rear == -1 && front == -1) {
                return 0;
            }

            return rear-front+1;
        }

        void display() {
            for(int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            } cout << endl;
        }

};

int main() {
    Queue arr;

    arr.enqueue(5);
    arr.enqueue(15);
    arr.enqueue(25);

    arr.display();

    arr.dequeue();


    arr.display();

    return 0;
}