#include<iostream>
using namespace std;

class Hero{

    public:
    int health;
    char level;

};

int main(){

    Hero Sudarshan;

    Sudarshan.health = 100;
    Sudarshan.level = 'A';

    cout <<" Health is : " << Sudarshan.health << endl;
    cout <<" Level is : " << Sudarshan.level << endl;

}