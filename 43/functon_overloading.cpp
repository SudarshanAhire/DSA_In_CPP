// function overloading 

#include<iostream>
using namespace std;

class A {

    public:
    void sayHello(){
        cout <<"hello sudarshan ahire "<< endl;
    }

    void sayHello(char name, int n){
        cout <<"hello sudarshan ahire "<< endl;
    }

    int sayHello(char name){
        cout <<"hello sudarshan ahire "<< endl;
    }
};

int main(){

    A obj;
    obj.sayHello();

    return 0;
}