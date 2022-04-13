#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int start = 0, end = n - 1;
    while(start <= end){
        swap(name[start++], name[end--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){

    char name[20];

    cout<<"Enter your name "<<endl;
    cin>>name;
    // name[2] = '\0';

    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"Length: "<<getLength(name) <<endl;

    reverse(name, getLength(name));
    cout<<"Your name is "<<endl;
    cout<<name<<endl;

    return 0;
}