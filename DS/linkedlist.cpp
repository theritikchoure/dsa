using namespace std;

#include<iostream>
#include<stdio.h>
#include<conio.h>

class LL
{
    private: 
        struct node {
            int item;
            node *next;
        } *front, *rear;

    public: 
        LL() {
            front = NULL;
            rear = NULL;
        }

        bool isEmpty() {
            if(front == NULL) return true;
            return false;
        }

        void append(int x) {
            node *n = new node();
            n->item = x;
            n->next = NULL;

            if(rear == NULL) {
                front = rear = n;
                return;
            }

            rear->next = n;
            rear = n;
        }

        void prepend(int x) {
            node *n = new node();
            n->item = x;
            n->next = front;
            front = n;
        }

        void display() {
            if(isEmpty()) {
                cout << "LL is empty" << endl;
                return;
            }

            node *t = front;

            while(t != NULL) {
                cout << t->item << " ";
                t = t->next;
            }

            cout << endl;
        }

        int count() {
            int count = 0;

            if(isEmpty()) {
                return count;
            }

            node *t;
            t = front;

            while(t != NULL) {
                t = t->next;
                count++;
            }

            return count;
        }

        void insertAfter(int x, int y) {
            if(isEmpty()) {
                return;
            }

            node *t;
            t = front;

            while(t != NULL) {

                if(t->item == x) {
                    node *t1 = t;
                    node *t2 = t->next;

                    node *n = new node();
                    n->item = y;
                    n->next = t2;
                    t1->next = n;

                    return;
                }


                t = t->next;
            }
        }

        void update(int x, int y) {
            if(isEmpty()) {
                return;
            }

            node *t;
            t = front;

            while(t != NULL) {

                if(t->item == x) {
                    t->item = y;
                    return;
                }


                t = t->next;
            }
        }

        int getFirst() {
            if(isEmpty()) return 0;

            return front->item;
        }

        void deleteNode(int x) {
            if(isEmpty()) return;

            node *t = front;
            while(t != NULL) {
                if(t->next->item == x) {
                    node *previousNode = t;
                    node *deleteNode = t->next;

                    previousNode->next = deleteNode->next;
                    delete deleteNode;
                    return;
                }

                t = t->next;
            }
        }
};

int main()
{

        LL list;

        list.append(50);
        list.append(20);
        list.append(30);
        list.append(40);
        list.prepend(60);

        list.display();

        list.insertAfter(20, 80);

        list.display();

        list.deleteNode(30);

        list.display();

        list.update(50, 90);

        list.display();

        cout<<"no. of node is: "<<list.count()<<endl;

        // list.remove();

        cout<<"First element is : "<<list.getFirst()<<endl;

        cout<<"list is empty or not : "<<list.isEmpty()<<endl;
        


}