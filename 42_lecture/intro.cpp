#include<iostream>
using namespace std;

class Hero{
    private:
    char health;
    
    public:
    char level;

    void print(){
        cout << level << endl;
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
};

int main(){

    Hero ramesh;

    cout <<"ramesh health is" << ramesh.getHealth() << endl;

    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout <<" Health is " << ramesh.getHealth() << endl;
    cout <<" level is " << ramesh.level << endl;


    // cout <<"Size of " << sizeof(h1);

    return 0;
}