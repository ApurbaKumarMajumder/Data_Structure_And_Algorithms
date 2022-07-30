#include<iostream>
using namespace std;

void update(int** ptr) {

    // kuch change hoga - NO
    // ptr = ptr + 1;

    // kuch change hoga - NO
    // *ptr = *ptr + 1;

    // kuch change hoga - YES
    **ptr = **ptr + 1;

}

int main() {
    
    /*
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

    cout << endl << endl;
    cout << "before " << i << endl;
    cout << "before " << ptr << endl;
    cout << "before " << ptr2 << endl;
    update(ptr2);
    cout << "after " << i << endl;
    cout << "after " << ptr << endl;
    cout << "after " << ptr2 << endl;
    */
    
    // MCQ for pointers
    
    /*
    // 1. 
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;
    */

    // 2.
    int first = 6;
    int *a = &first;
    int *b = a;
    (*b)++;
    cout << first << endl;



    
    return 0;
}