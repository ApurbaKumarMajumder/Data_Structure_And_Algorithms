#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtTail(Node* & tail, int data) {

    // new Node create
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void InsertAtHead(Node* &head, int data) {
    // create a new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void printLL(Node* & head) {
    // pointing the current element
    Node* temp = head;

    while (temp != NULL) {
        cout<< temp->data <<" ";
        temp = temp -> next;
    }
}

int main() {

    // create a new Node
    Node* node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    Node* head = node1;
    Node* tail = node1;
    // head pointed to node1
    // printLL(head);
    // cout<<" "<<endl;

    // InsertAtHead(head, 12);
    // printLL(head);
    // cout<<" "<<endl;

    // InsertAtHead(head, 15);
    // printLL(head);

    // tail pointed to node1
    InsertAtTail(tail, 12);
    printLL(head);
    cout<<" "<<endl;

    InsertAtTail(tail, 15);
    printLL(head);
    return 0;
}