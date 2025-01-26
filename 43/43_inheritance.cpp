#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout <<"barking" << endl;
    }
};

class Dog : public Animal {

};

class GermanShepher : public Dog {

};

int main(){

    GermanShepher d;
    d.speak();

    return 0;
}