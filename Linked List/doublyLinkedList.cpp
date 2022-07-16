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

void insertAtHead(Node* &head, Node* &tail, int val) {
    
    // empty list
    if (head == NULL) {
        Node* temp = new Node(val);
        head = temp;
        tail = temp;
    } else {
        Node* temp = new Node(val);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int val) {

    // empty list
    if (tail == NULL) {
        Node* temp = new Node(val);
        tail = temp;
        head = temp;
    } else {
        Node* temp = new Node(val);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }  
}

void insertAtPosition(Node* &head, Node* &tail, int position, int val, int size) {
    
    // insert at start
    if (position == 1) {
        insertAtHead(head, tail, val);
        return;
    } else if (position < 0 || position > size) {
        // cannot insert element these areas
        cout<<"Invalid arguments"<<"\n";
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1) {
        temp = temp->next;
        count++;
    }

    // insertion at the last position
    if(temp -> next == NULL) {
        insertAtTail(head, tail, val);
        return;
    }

    // creating a node for new element at arbitary position
    Node* nodeToInsert = new Node(val);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main() {
    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 12);
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";

    insertAtHead(head, tail, 11);
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";

    insertAtHead(head, tail, 8);
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";

    insertAtTail(tail, tail, 22);
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";

    insertAtPosition(head, tail, 2, 100, length(head));
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";

    insertAtPosition(head, tail, 1, 101, length(head));
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";

    insertAtPosition(head, tail, 6, 105, length(head));
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";

    insertAtPosition(head, tail, 7, 102, length(head));
    printLL(head);
    cout<<"Size of LL: "<<length(head)<<"\n";
    return 0;
}