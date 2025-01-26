// operatoe overloading

#include<iostream>
using namespace std;

class A {

    public:
    int a;
    int b;

    void add(){
        cout << a + b << endl;
    }

    void operator+ (A &obj){
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout <<"output " << value2-value1 << endl;

        cout << "hello sudarshan "<< endl;
    }

    void operator() (){
        cout <<"main bracket hu"<< endl;
    }
};

int main(){

    A obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    return 0;
}