#include<iostream>
using namespace std;

void update(int *p){
    *p = (*p) * 2;
}

int main(){

    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout<<first<<' '<<second<<endl;

    /*
    int first = 6;
    int *p = &first;
    int *q = p;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    (*q)++;
    cout<<first<<endl;
    */

//    int first = 8;
//    int *p = &first;
//    cout<< (*p)++ << endl;
//    cout<<first<<endl;

    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout<< first << ' '<<second <<endl;

    // float f = 12.5;
    // float p = 21.5;
    // float* ptr = &f; // address of f
    // (*ptr)++; // value of f
    // *ptr = p;
    // cout<< *ptr << ' ' << f << " " << p <<endl;

    // int arr[5];
    // int *ptr;
    // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

    // int arr[] = {11, 21, 13, 14};
    // cout<< *(arr)<<" "<<*(arr + 1)<<endl;

    // int arr[6] = {11, 12, 31};
    // cout<<arr<<" "<<&arr<<endl;
    // cout<<(arr + 1)<<endl;
    // int *p = arr;
    // cout<<p[2]<<endl;

    // int arr[] = {11, 12, 13, 14, 15};
    // cout<<*(arr)<<" "<< *(arr + 3)<<endl;

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++; // array updation in the symbol table is not allowed
    // cout<<*ptr<<endl; will show error

    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl;

    // char arr[]= "abcde";
    // char *p = &arr[0];
    // cout<<p <<endl;
    // cout<<++p<<endl;

    // char str[] = "babbar";
    // char *p = str;
    // cout<< str[0]<<endl<<p[0]<<endl;

    // int i = 10;
    // update(&i);
    // cout<<i<<endl;

    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout<<first<< " "<<second <<endl;


    return 0;
}