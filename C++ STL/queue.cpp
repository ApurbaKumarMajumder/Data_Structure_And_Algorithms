#include <iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Apurba");
    q.push("Kumar");
    q.push("Majumder");

    cout<<"Size before pop "<<q.size()<<endl;

    cout<<"First Element "<<q.front()<<endl;

    // q.pop();
    // cout<<"First Element "<<q.front()<<endl;

    cout<<"Size after pop "<<q.size()<<endl;
}