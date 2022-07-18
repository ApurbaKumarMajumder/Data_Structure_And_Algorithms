// approach 1
Node* reverseLinkedList(Node* &head) {
    // empty list and 1 element list covered
    if (head == NULL || head->next == NULL) {
        return head;
    } else {
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;

        while (curr != NULL)
        {
            forward = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
}

// Approach 2
void reverse (Node* &head, Node* curr, Node* prev) {
    // base case
    if (curr == NULL) {
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}

Node* reverseLinkedList(Node* &head) {
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}

// Approach 3
Node* reverse1(Node* head) {
    // base case
    if(head == NULL || head -> next == NULL) {
        return head;
    }

    Node* chotaHead = reverse1(head->next);

    head -> next->next = head;
    head -> next = nULL;

    return chotaHead;
}