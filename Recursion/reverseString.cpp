#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int i, int j){

    cout<<"call received for "<<str <<endl;

    //base case
    if(i>j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i, j);
}

int main(){

    string name = "apurba";

    reverse(name, 0, name.length() - 1);

    cout<<endl<<name<<endl;

    return 0;
}