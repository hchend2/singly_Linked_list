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
        // parameterized constructor...
        Node(int data, Node* next){
            this->data = data;
            this->next = next; //
        }
};

class myLinkedList {
    Node* head; // head of linked list...

    public:
        // by default...
        myLinkedList() {
            head = NULL; //
        }
        // method to insert a new node in the linked list...
        void insert_last(int);
        void insert_front(int);
        void insert_after(int, int);
            
        //method to print the list...
        void print();
};

// this method is used to insert at any position in between the head and and the tail...
void myLinkedList::insert_after(int data, int pos) {
    
    int count = 1; //
    Node* curr = head;
    Node* tmpNode = NULL;

    while (curr->next != NULL) {
        count++;
        curr = curr->next;
        if (count == pos) {

            tmpNode = curr->next; // save next node in tmpNode...

            Node* newNode = new Node();  // create new empty node...
            newNode->data = data; // insert data into new node...

            curr->next = newNode; // update current node...
            newNode->next = tmpNode; // update next node...

        }
    }
}

// this method is used to insert at the front of the linked list...
void myLinkedList::insert_front(int data) {

    Node* newNode = new Node(); // create new empty node...
    newNode->data = data; // put data into newNode created...

    newNode->next = head;  // make head to be next...
    head = newNode; // update head to newNode....

}

// this method is used to insert at the tail of the list...
void myLinkedList::insert_last(int data) {
    
    Node* newNode = new Node(); // new empty node created...
    newNode->data = data;  // add data to new node created...

    if (head == NULL) {
        head = newNode; // give to head the new node we created...
        return; //
    }
    // need to traverse the linked list...
    Node* tmpNode = head; /*save head into tmpNode so we can use 
    it to move to next...*/
    while (tmpNode->next != NULL) {
        tmpNode = tmpNode->next;
    }
    tmpNode->next = newNode;
}

void myLinkedList::print() {
    Node* tmpNode = head;

    // list is empty...
    if (head == NULL) {
        cout << "list is empty" << endl; //
        return; //
    }

    // list is not empty... we traverse...
    while (tmpNode != NULL) {
        cout << tmpNode->data <<" ";
        tmpNode = tmpNode->next;
    }
}

int main() {

    myLinkedList linkList;

    linkList.insert_last(0);
    linkList.insert_last(3);
    linkList.insert_last(4);
    linkList.insert_last(1);

    linkList.insert_front(10);
    linkList.insert_front(20);

    linkList.insert_after(25, 3);

    cout <<endl;
    cout << "Hello LinkedList "<<endl;
    cout << "Element of linked list are: ";
    linkList.print();
    cout << endl;
    return 0;
}