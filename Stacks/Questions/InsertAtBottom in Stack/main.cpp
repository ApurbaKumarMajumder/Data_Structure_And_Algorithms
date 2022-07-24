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

// --------------- OR ---------------

void solve(stack<int> &s, int x){
    // base case
    if (s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    solve(stack, x);
    
    s.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x) {
    solve(myStack, x);
    return myStack;
}