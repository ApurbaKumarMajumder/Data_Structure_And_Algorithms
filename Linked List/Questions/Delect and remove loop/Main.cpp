// Detect cu=ycle in Linked List
// remove cycle from LL
// beginning / start node of Loop in Linked List

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

Node* getStartingNode(Node* head) {

    if(head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while (slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    
    return slow;
}

void removeLoop(Node* head) {

    if(head == NULL) {
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while (temp -> next != startOfLoop) {
        temp = temp -> next;
    }

    temp -> next = NULL;
}