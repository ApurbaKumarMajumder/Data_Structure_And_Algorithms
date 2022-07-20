#include<iostream>
#include<map>
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
    if(head == NULL) {
        cout<<"List is empty"<<"\n";
    }
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

bool isCircularList(Node* &head) {
    // empty list
    if (head == NULL) {
        return NULL;
    }

    Node* temp = head -> next;
    while (temp != NULL && temp != head) {
        temp = temp -> next;
    }

    if(temp == head) {
        return true;
    }

    return false;
}

bool detectLoop(Node* head) {
    if (head == NULL) {
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while (temp != NULL) {
        
        // cycle is present
        if (visited[temp] == true) {
            cout<<"Present on element "<< temp->data<<"\n";
            return 1;
        }
        
        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

Node* floydDetectLoop(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if (slow == fast) {
            cout<< "present at "<<slow -> data<<"\n";
            return slow;
        }
    }
    
    return NULL;
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

    // deleteNode(3, head);
    // printLL(head);
    // cout<<" "<<endl;

    // if (isCircularList(head)) {
    //     cout<< "the given Linked List is circular in nature" << "\n";
    // } else {
    //     cout<<"OOPs! "<<"\n"<<"Not circular bro. "<<"\n";
    // }

    tail -> next = head -> next;

    if (floydDetectLoop(head) != NULL) {
        cout<<"Cycle is present"<<"\n";
    } else {
        cout<<"no cycle" << "\n";
    }
    return 0;
}