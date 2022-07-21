class Solution
{
    private:
        
        void insertAtTail(Node* &head, Node* &tail, int val) {
            Node* newNode = new Node(val);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            } else {
                tail -> next = newNode;
                tail = newNode;
            }
        }
    
    public:

        Node *copyList(Node *head)
        {
            // step 1: create a clone list
            Node* cloneHaad = NULL;
            Node* cloneTail = NULL;

            Node* temp = head;

            while (temp != NULL)
            {
                insertAtTail(cloneHead, cloneTail, temp -> data);
                temp = temp -> next;
            }

            // step 2: Create a map
            unordered_map<Node*, Node*> oldToNewNode;

            Node* originalNode = head;
            Node* cloneNode = cloneHead;

            while (originalNode != NULL && cloneNode != NULL)
            {
                oldToNew[originalNode] = cloneNode;
                originalNode = originalNode -> next;
                cloneNode = cloneNode -> next;
            }

            originalNode = head;
            cloneNode = cloneHead;

            while (originalNode != NULL)
            {
                cloneNode -> arb = oldToNewNode[originalNode -> arb];
                originalNode = originalNode -> next;
                cloneNode = cloneNode -> next;
            }
            return cloneHead;
        }

};