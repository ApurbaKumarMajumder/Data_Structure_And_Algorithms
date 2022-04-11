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

    cout<<"50 is present or not -> "<<s.count(50)<<endl;

    set<int>::iterator itr = s.find(50);

    for(auto it = itr; it != s.end(); it++){
        cout<<*it<<' ';
    }
    cout<<endl;
}