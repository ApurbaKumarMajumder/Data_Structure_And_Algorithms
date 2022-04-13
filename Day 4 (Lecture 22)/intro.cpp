#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        if(a[s] != a[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

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

    cout<< "Palindrome or Not: "<<checkPalindrome(name, getLength(name))<<endl;
    // prints 1 or 0 for true and false

    
    return 0;
}