// Ambiguity

#include<iostream>
using namespace std;

class A {

    public:
    void abc(){
        cout << "class A" << endl;
    }
};

class B {

    public:
    void abc(){
        cout << "class B" << endl;
    }
};

class C : public A, public B {

};

int main(){

    C obj;

    // obj.abc();
    obj.A::abc();

    return 0;
}