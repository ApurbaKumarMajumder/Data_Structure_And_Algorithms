#include<iostream>
using namespace std;

int main() {

    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;

    cout << endl << endl << " Sab sahi chal rha h " << endl << endl;

    // value
    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;

    // address
    cout << &i << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;

    cout << &ptr << endl;
    cout << ptr2 << endl;

    return 0;
}