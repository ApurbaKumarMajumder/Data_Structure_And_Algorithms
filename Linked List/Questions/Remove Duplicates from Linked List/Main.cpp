// Remove Duplicates from a Sorted Linked List

Node* uniqueSortedList(Node* head) {

    // empty list
    if (head == NULL) {
        return NULL;
    }

    // non empty list
    Node* curr = head;

    while (curr != NULL) {
        if (curr -> next != NULL && curr -> data == curr -> next -> data) {
            Node* nextOfNode = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = nextOfNode;
        } else {
            curr = curr -> next;
        }
    }

    return head;
}

// Remove Duplicated form a Unsorted Linked List

//    ------ Approach 1 -------
// Step1: sort the given linked list O(nlogn)
// Step2: apply the previous algorithm O(n)

//    ------ Approach 2 -------
// two loops for duplicate elements O(n^2)

Node* remove_duplicates(Node* &head) {

    // conditions checked for empty and single node LL
    if (head == NULL) {
        return NULL;
    } else if (head -> next == NULL) {
        return head;
    }

    Node* prev = head;
    Node* curr = NULL;
    int count = 0;

    // pick element one by one (first itetrative loop)
    while (prev != NULL && prev -> next != NULL) {
        curr = prev;
        // compare the picked element with rest of the elements in the LL
        while (curr -> next != NULL) { // second itetrative loop
            // if duplicate then delete
            if(prev -> data == curr -> next -> data) {
                if (curr -> next -> next != NULL) {
                    Node* temp = curr -> next;
                    curr -> next = curr -> next -> next;
                    temp -> next = NULL;
                    delete(temp);
                } else {
                    curr -> next = NULL;
                }

            } else {
                curr = curr -> next;
            }
        }
        prev = prev -> next;
    }
    return head;
}

//    ------ Approach 3 -------
// create a map and remove elements which have similar entry in the map

Node *removeDuplicates(Node *&head)
{

    // conditions checked for empty and single node LL
    if (head == NULL)
    {
        return NULL;
    }
    else if (head->next == NULL)
    {
        return head;
    }

    map<int, bool> visited;
    Node *temp = head;
    Node *prev = NULL;
    while(temp!=NULL){
        if(visited[temp->data] == true){
            prev->next = temp->next;
            temp->next = NULL;
            temp = prev->next;
        }
        else{
            visited[temp->data] = true;
            prev = temp;
            temp = temp->next;
        }
    }

    return head;
}