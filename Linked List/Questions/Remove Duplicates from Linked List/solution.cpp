#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory id free for node with data " << value << endl;
    }
};

void InsertAtTail(Node *&tail, int data)
{

    // new Node create
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtHead(Node *&head, int data)
{
    // create a new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void printLL(Node *&head)
{
    // pointing the current element
    if (head == NULL)
    {
        cout << "List is empty"
             << "\n";
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void deleteNode(Node *head, int position)
{

    Node *prev = head;
    int count = position - 1;

    while (count--)
    {
        prev = prev->next;
    }

    Node *curr = prev->next;

    prev->next = curr->next;
    curr->next = NULL;
    delete (curr);
}

Node *remove_duplicates(Node *&head)
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

    while (temp != NULL)
    {
        Node *next = temp->next;
        if (visited[temp->data] == true)
        {
            // we got a visited node
            // we have to delete this node
            // cout<<"rep"<<temp->data;
            Node *position = head;
            int count = 0;
            while (position != temp) // address
            {
                count++;
                position = position->next;
            }
            // cout<<"!";

            deleteNode(head, count);
            // cout<<"2";
        }
        else
        {
            visited[temp->data] = true;
        }
        // cout<<"3";
        temp = next;
    }

    return head;
}

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

int main()
{

    // create a new Node
    Node *node1 = new Node(-1);
    Node *head = node1;
    Node *tail = node1;

    // 3 2 3 4 2 3 -1
    InsertAtHead(head, 3);
    InsertAtHead(head, 2);
    InsertAtHead(head, 4);
    InsertAtHead(head, 3);
    InsertAtHead(head, 2);
    InsertAtHead(head, 3);

    printLL(head);

    removeDuplicates(head);
    printLL(head);
}