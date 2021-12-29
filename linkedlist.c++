#include <iostream>

using namespace std;

class Node {
    /* the node is made of : some data and a pointer pointing to the 
    next node in the list...*/
    public:
        int data; //
        Node* next; //

        // here is my default constructor...
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


int main() {

    cout << "Hello LinkedList "<<endl;
    return 0;
}