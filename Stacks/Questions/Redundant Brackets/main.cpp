#include <stack>

bool findRedundantBrackets(string &s)
{
    stack<char> stack;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') 
        {
            stack.push(ch);
        }
        else {
            // ch ya toh ')' hai or lowercase letter

            if (ch == ')')
            {
                bool flag = true;

                while (stack.top() != '(') {
                    char top = stack.top();

                    if (top == '+' || top == '-' || top == '/' || top == '*')
                    {
                        flag = false;
                    }
                    stack.pop();
                }

                if (flag == true)
                {
                    return true;
                }
                stack.pop();
            }   
        }
    }

    return false;
}