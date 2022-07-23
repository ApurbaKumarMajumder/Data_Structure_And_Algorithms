#include<iostream>
#include<stack>
using namespace std;

class Stack {

    // properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (size - top > 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack OverFlow " << endl;
        }
    }

    
}

int main() {

    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout << "Printing top element "<<s.top()<<endl;

    if (s.empty()) {
        cout<< "Stack is empty "<<endl;
    } else {
        cout<<"Stack is not empty "<<endl;
    }

    cout<<"Size of stack is "<<s.size()<<"\n";

    return 0;
}