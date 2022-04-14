#include<iostream>
// #include "Hero.cpp"
using namespace std;

// Now we imported the object from different file
// this is a class
class Hero {
    
    
    // Properties
    private: 
    // can be accessed in the class only
    int health;
    
    public: // can be accessed in and outside of the class
    char level;

    void print(){
        cout<< level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){

    // created a object
    Hero Apurba;
    cout<<"Apurba health is "<<Apurba.getHealth()<<endl;

    // Apurba.health = 100;
    // use setter as it's private
    Apurba.setHealth(100);
    Apurba.level = 'A';

    cout<<"health is: "<<Apurba.getHealth() <<endl;
    cout<<"level is: "<<Apurba.level <<endl;

    // cout<<"size : "<<sizeof(Apurba)<<endl;
}