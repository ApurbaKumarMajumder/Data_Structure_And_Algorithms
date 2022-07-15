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

    // destructor
    ~Node() {
        int value = this -> data;
        // memory free
        if (this -> next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout<<"memory id free for node with data "<<value<<endl;
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

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
    
    // insert at start
    if(position == 1) {
        InsertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1) {
        temp = temp->next;
        count++;
    }

    // inserting at the Last position
    if(temp -> next == NULL) {
        InsertAtTail(tail, data);
        return;
    }

    // creating a node for data
    Node* temp2 = new Node(data);
    temp2->next = temp->next;
    temp->next = temp2;
}

void deleteNode(int position, Node* &head){
    if (position == 1) {
        // deleting first(starting) node
        Node* temp = head;
        head = head -> next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    } 
    else {
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while (count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
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
    cout<<" "<<endl;

    insertAtPosition(head, tail, 2, 22);
    printLL(head);
    cout<<" "<<endl;

    deleteNode(3, head);
    printLL(head);
    cout<<" "<<endl;
    return 0;
}