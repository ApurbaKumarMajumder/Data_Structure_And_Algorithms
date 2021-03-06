#include <iostream>
#include <stack>
using namespace std;

class Stack
{

    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow " << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is Empty " << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    // Write your code here.
    if (myStack.empty())
    {
        myStack.push(x);
        return myStack;
    }

    int val = myStack.top();
    myStack.pop();

    stack<int> result = pushAtBottom(myStack, x);

    myStack.push(val);
    return myStack;
}

int main()
{

    // Stack st (5);

    // st.push(22);
    // st.push(43);
    // st.push(44);
    // st.push(36);
    // st.push(26);
    // st.push(16);

    // cout << st.peek() << endl;

    // st.pop();

    // cout << st.peek() << endl;

    // st.pop();

    // cout << st.peek() << endl;

    // st.pop();

    // cout<<st.peek()<<endl;

    // if (st.isEmpty()) {
    //     cout<< "Stack is empty mere dost"<< endl;
    // } else {
    //     cout<< "Stack is not empty mere dost"<<endl;
    // }

    stack<int> stack;

    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    int val = stack.top();
    cout << val << "\n";

    pushAtBottom(stack, 5);

    while(!stack.empty()) {
        cout<<stack.top()<<endl;
        stack.pop();
    }

    // // creation of stack
    // stack<int> s;

    // // push operation
    // s.push(2);
    // s.push(3);

    // // pop
    // s.pop();

    // cout << "Printing top element "<<s.top()<<endl;

    // if (s.empty()) {
    //     cout<< "Stack is empty "<<endl;
    // } else {
    //     cout<<"Stack is not empty "<<endl;
    // }

    // cout<<"Size of stack is "<<s.size()<<"\n";

    return 0;
}
