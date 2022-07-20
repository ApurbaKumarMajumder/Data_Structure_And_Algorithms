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