#include <iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(50);
    s.insert(10);
    s.insert(60);
    s.insert(0);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<"5 is present or not -> "<<s.count(5)<<endl;
}