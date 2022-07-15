#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int val) {
        this->data = val
        this->prev = NULL;
        this->next = NULL;
    }
};

void printLL(Node* &head) {
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<"\n";
}

int main() {
    
    return 0;
}