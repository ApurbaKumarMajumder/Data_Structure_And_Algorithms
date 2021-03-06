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

    // empty list
    if(tail == NULL) {
        cout<<"List is Empty"<< "\n";
        return;
    }

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

void deleteNode(Node* &tail, int value) {

    // empty list
    if(tail == NULL) {
        cout<<"List is empty, please check again! "<<"\n";
        return;
    } else {
        // non empty
        // assuming that "value" is present in the linked list
        Node* prev = tail;
        Node* curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        
        // 1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }
        // >= 2 Node linked list
        if(tail == curr) {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node* &tail) {
    // empty list
    if (tail == NULL) {
        return NULL;
    }

    Node* temp = tail -> next;
    while (temp != NULL && temp != tail) {
        temp = temp -> next;
    }

    if(temp == tail) {
        return true;
    }

    return false;
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

    deleteNode(tail, 3);
    print(tail);

    if (isCircularList(tail)) {
        cout<< "the given Linked List is circular in nature" << "\n";
    } else {
        cout<<"OOPs! "<<"\n"<<"Not circular bro. "<<"\n";
    }

    return 0;
}