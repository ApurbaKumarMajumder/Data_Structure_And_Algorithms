#include<iostream>
using namespace std;

class Node() {
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

int main() {
    
    return 0;
}