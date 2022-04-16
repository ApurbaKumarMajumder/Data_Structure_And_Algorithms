#include <iostream>
using namespace std;

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

   int first = 8;
   int *p = &first;
   cout<< (*p)++ << endl;
   cout<<first<<endl;

    return 0;
}