#include <iostream>

using namespace std;

class Stack {
    private: 
        int top;
        int arr[10];

    public:
        Stack() {
            top = -1;

            // when a new stack is created, all the elements in the stack are zero
            for(int i = 0; i < 10; i++) {
                arr[i] = 0;
            }
        }

        bool isEmpty() {
            if(top == -1) {
                return true;
            } else {
                return false;
            }
        }

        bool isFull() {
            if(top == 9) {
                return true;
            } else {
                return false;
            }
        }

        void push(int x) {

            // Stack overflow condition
            if(isFull()) {
                cout << "Stack overflow!" << endl;
                return;
            }

            top++;

            arr[top] = x;

        }

        int pop() {
            if(isEmpty()) {
                cout << "Stack underflow!" << endl;
                return 0;
            }

            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }

        int count() {
            return top+1;
        }
        
        int peek(int index) {
            if(isEmpty()) {
                cout << "Stack underflow!" << endl;
                return 0;
            }

            return arr[index];
        }

        void change(int index, int newValue) {
            if(isEmpty()) {
                cout << "Stack underflow!" << endl;
                return;
            }

            arr[index] = newValue;
        }  

        void display() {
            for(int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            } cout << endl;
        }

};

int main() {
    Stack arr;

    arr.push(5);
    arr.push(15);
    arr.push(25);
    arr.push(35);
    arr.push(45);
    arr.push(55);
    arr.push(65);
    arr.push(75);
    arr.push(85);
    arr.push(95);


    arr.display();

    arr.pop();

    arr.display();

    return 0;
}