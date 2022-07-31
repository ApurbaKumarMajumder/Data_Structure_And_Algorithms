#include <bits/stdc++.h>
using namespace std;

void exp2(int *r1, int *r2){

    cout<<r1<<' '<<r2<<endl;
    cout<<*r1<<' '<<*r2<<endl;

    int temp = *r1;
    *r1 = *r2;
    *r2 = temp;

    cout<<*r1<<" "<<*r2<<endl;
}

void exp3(int* p1, int*p2){

    cout<<p1<<" "<<p2<<endl;
    cout<<*p1<<" "<<*p2<<endl;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout<<*p1<<" "<<*p2<<endl;
}

void exp4(int**p1, int**p2){

    cout<<**p1<<' '<<**p2<<endl;

    int* temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout<<**p1<<" "<<**p2 <<endl;
}

int main(){

    //val types, call by value
    int v1 = 10;
    int v2 = 20;
    // exp(v1, v2);

    //val types, call by reference
    // cout<<v1<<' '<<v2<<endl;
    // exp2(&v1, &v2);
    // cout<<v1<<' '<<v2<<endl;

    //ref types, call by value
    // int* r1 = &v1;
    // int* r2 = &v2;
    // exp3(r1, r2);
    // cout<<v1<<" "<<v2<<endl;

    // ref types, call by reference
    int* r1 = &v1;
    int* r2 = &v2;
    exp4(&r1, &r2);

    cout<<v1<<" "<<v2<<endl;
}