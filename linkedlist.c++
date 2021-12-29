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
        void insert(int data) {

        }

        //method to print the list...
        void print() {

        }
};

void myLinkedList::insert(int data) {

    Node* newNode = new Node(); // new empty node created...

    // give to head the new node we created...
    if (head == NULL) {
        head = newNode;
        return; //
    }

    // need to traverse the linked list...
    Node* tmpNode = head; /*save head into  tmpNode so that we can use 
    it to move to next...*/
    while (tmpNode->next != NULL) {
        tmpNode = tmpNode->next;
    }

    tmpNode->next = newNode;
}

int main() {

    cout << "Hello LinkedList "<<endl;
    return 0;
}