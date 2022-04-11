#include <iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;
    // FILO -> First In Last Out

    s.push("Majumder");
    s.push("Kumar");
    s.push("Apurba");

    cout<<"Top Element -> "<<s.top()<<endl;

    // s.pop();
    // cout<<"Top Element -> "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"Empty ot not "<<s.empty()<<endl;
}