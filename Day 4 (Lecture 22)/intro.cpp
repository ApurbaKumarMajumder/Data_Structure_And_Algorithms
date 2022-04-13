#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){

    int arr[26] = {0}; // characher array of english alphabets

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        //lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            //uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }

    // finding maximum occuring character
    int maxi = -1, ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    
    char finalAns = 'a' + ans;
    return finalAns;
}

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

    // char name[20];

    // cout<<"Enter your name "<<endl;
    // cin>>name;
    // // name[2] = '\0';

    // cout<<"Your name is ";
    // cout<<name<<endl;

    // cout<<"Length: "<<getLength(name) <<endl;

    // reverse(name, getLength(name));
    // cout<<"Your name is "<<endl;
    // cout<<name<<endl;

    // cout<< "Palindrome or Not: "<<checkPalindrome(name, getLength(name))<<endl;
    // // prints 1 or 0 for true and false

    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;

    
    return 0;
}