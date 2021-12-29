#include <iostream>

using namespace std;

class Node {
    /* the node is made of : some data and a pointer pointing to the 
    next node in the list...*/
    public:
        int data; //
        Node* next; //

        // by default...
        Node() { 
            data = 0; // no data in my linkedlist..
            next = NULL; // it is empty...
        }
        // here is my parameterized constructor...
        Node(int data, Node* next) {
            this->data = data;
            this->next = next; //
        }
};


class myLinkedList {
    Node* head; // head of my linked list...

    public:
        // by default...
        myLinkedList() {
            head = NULL; //
        }
        // method to insert a new node in the linked list...
        void insert(int) {

        }

        //method to print the list...
        void print() {

        }
};

int main() {

    cout << "Hello LinkedList "<<endl;
    return 0;
}