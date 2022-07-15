#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int val) {
        this->data = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printLL(Node* &head) {
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

int length(Node* head) {
    int result = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        result++;
        temp = temp->next;
    }
    return result;
}

void insertAtHead(Node* &head, int val) {
    Node* temp = new Node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;

    insertAtHead(head, 12);
    printLL(head);

    insertAtHead(head, 11);
    printLL(head);

    insertAtHead(head, 8);
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";
    return 0;
}