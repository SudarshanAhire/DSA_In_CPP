// love babber lecture 43 oops->2

#include<iostream>
using namespace std;

class Student {

    private:
        string name;
        int age;
        int height;

    public:
    int getAge() {
        return this->age;
    }
};

int main(){

    Student first;

    cout << "Sab kuch acche se chal raha hai "<< endl;

    return 0;
}