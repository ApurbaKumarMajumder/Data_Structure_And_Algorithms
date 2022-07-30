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

    // 2.
    int first = 6;
    int *a = &first;
    int *b = a;
    (*b)++;
    cout << first << endl;
    
    // 3.
    int first = 8;
    int *a = &first;
    cout << (*a)++ << endl;
    cout << first << endl;

    // 4.
    int *p = 0;
    int first = 110;
    // *p = first; // will not working
    // p = &first;
    cout << *p << endl;

    // 5.
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << endl;

    // 6.
    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;

    // 7.
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    // 8.
    int arr[] = {11, 21, 13 , 14};
    cout << *(arr) << " " << *(arr + 1) << endl;

    // 9.
    int arr[6] = {11, 12, 13};
    cout << arr << " " << &arr << endl;
    // arr, &arr[0] and &arr are the same -> address of arr[0]

    // 10.
    int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;

    // 11.
    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;

    // 12.
    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);

    // 13.
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++; // reassignment during pointer declaration is not allowed as changes in the symbol table is not acceptable
    cout << *ptr << endl;

    // 14.
    char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout << *ptr << endl;

    // 15.
    char arr[] = "abcde";
    char *ptr = &arr[0];
    cout << ptr << endl;

    // 16.
    char arr[] = "abcde";
    char* ptr = &arr[0];
    ptr++;
    cout << ptr << endl;

    // 17.
    char str[] = "babbar";
    char* ptr = str;
    cout << str[0] << " " << ptr[0] << endl;
    
    // 18.
    void update(int* ptr) {
        *ptr = (*ptr) * 2;
    }

    int main() {
        int i = 10;
        update(&i);
        cout << i << endl;
        return 1;
    }
    
    // 19.
    int first = 110;
    int *a = &first;
    int **b = &a;
    int second = (**b)++ + 9;
    cout << first << " " << second << endl;
    
    // 20.
    int first = 100;
    int *a = &first;
    int **b = &a;
    int second = ++(**b);
    int *ptr = *b;
    ++(*ptr);
    cout << first << " " << second << endl;

    // 21.
    void increment(int **ptr) {
        ++(**ptr);
    }

    int main() {
        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;
    }
    */
    
    return 0;
}