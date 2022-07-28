#include<iostream>
using namespace std;

int main() {

    /*
    int num = 5;
    cout << num << endl;

    // address of Operator - &
    cout << "address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is: " << p2 << endl;
    cout << "Value is: " << *p2 << endl;

    cout << "size of integer is " << sizeof(num) << endl;
    // pointers to any datatype is of 8 bits as all of them are storing address only and address are of 8 bits.
    cout << "size of pointer is " << sizeof(ptr) << endl;
    cout << "size of double is " << sizeof(p2) << endl;

    // pointer to int is created
    // pointing to some garbage value (not a good practice).
    // int *p = 0;

    // cout << *p << endl;

    int i = 5;
    int *q = &i;

    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
    */
    
    int num = 5;
    int a = num;

    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    // copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // important concept
    int i = 3;
    int *t = &i;
    cout << (*t)++ << endl;

    *t = *t + 1;
    cout << *t << endl;

    cout << "before " << t << endl;
    t = t + 1;
    cout << "after " << t << endl;

    return 0;
}