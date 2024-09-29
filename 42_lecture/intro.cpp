#include<iostream>
using namespace std;

class Hero{
    public:
    char health;
    int value;
};

int main(){

    Hero sudarshan;
    sudarshan.value = 500;
    sudarshan.health = 'A';

    cout <<" Value is " << sudarshan.value << endl;
    cout <<" Health is " << sudarshan.health << endl;


    // cout <<"Size of " << sizeof(h1);

    return 0;
}