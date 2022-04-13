#include<iostream>
// #include "Hero.cpp"
using namespace std;

// Now we imported the object from different file
// this is a class
class Hero {
    
    // Properties
    char name[100];
    int health;
    char level;

};

int main(){

    // created a object
    Hero Apurba;

    cout<<"size : "<<sizeof(Apurba)<<endl;
}