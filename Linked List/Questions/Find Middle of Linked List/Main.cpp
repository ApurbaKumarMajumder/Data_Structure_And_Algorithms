// Approach 1

int getLength(Node* &head) {
    
    Node* curr = head;
    int count = 0;
    
    while (curr != NULL) {
        count++;
        curr = curr -> next;
    }
    return count;
}

Node *findMiddle(Node *head) {
    
    // Write your code here
    int size = getLength(head);
    int mid = (size / 2);
    
    Node* temp = head;
    
    while (mid--) {
        temp = temp -> next;
    }
    
    return temp;
}

// Approach 2

Node* getMiddle(Node* head) {
    
    // for empty or 1 node Linked List
    if (head == NULL || head -> next == NULL) {
        return head;
    }
    
    // 2 nodes
    if (head -> next -> next == NULL) {
        return head -> next;
    }
    
    // main algorithm
    Node* fast = head -> next;
    Node* slow = head;
    
    while (fast != NULL) {
        // fast = fast -> next -> next;
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    
    return slow;
}

