#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde"; // including null character

    cout<<arr<<endl;
    cout<<ch<<endl;
    // pointer works differently for character array

    char *c = &ch[0];
    //prints entire string
    cout<<c<<endl;

    char temp = 'z';
    char *p = &temp;

    cout<<p<<endl;

    return 0;
}