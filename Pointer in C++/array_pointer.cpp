#include<iostream>
using namespace std;

int main(){

    // int arr[10] = {2, 5, 6};

    // cout<<"address of first memory block is "<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"address of first memory block is "<<&arr[0]<<endl;

    // cout<<"*arr -> "<<*arr<<endl;
    // cout<<"*arr + 1 -> "<<*arr + 1<<endl;
    // cout<<"(*arr + 1) -> "<<*(arr + 1)<<endl;

    int arr[10] = {23, 122, 41, 67};

    cout<<"address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first memory block is "<<&arr[0]<<endl;

    cout<<"*arr -> "<<*arr<<endl;
    cout<<"*arr + 1 -> "<<*arr + 1<<endl;
    cout<<"(*arr + 1) -> "<<*(arr + 1)<<endl;
    cout<<"*(arr) + 1 -> "<<*(arr) + 1<<endl;
    cout<<"arr[2] -> "<<arr[2]<<endl;
    cout<<"*(arr + 2) -> "<<*(arr + 2)<<endl;

    int i = 3;
    cout<<"i = 3, i[arr] -> " <<i[arr] <<endl;

    return 0;
}