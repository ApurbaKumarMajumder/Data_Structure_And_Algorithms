#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node (int val) {
        this->data = val;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void print(Node* &tail) {
    Node* temp = tail;

    do {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp != tail);
    cout<<"\n";
}

void insertNode (Node* &tail, int element, int val) {

    // empty list
    if(tail == NULL) {
        Node* newNode = new Node(val);
        tail = newNode;
        newNode->next = newNode;
    } else {
        // non-empty list
        // assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node* temp = new Node(val);
        temp->next = curr->next;
        curr->next = temp;
    }
}

int main() {
    
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    return 0;
}