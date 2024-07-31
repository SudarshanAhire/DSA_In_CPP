#include<iostream>
using namespace std;

void update1(int a){
    a = a/2;
}

int update2(int a){
    a -= 5;
    return a;
}

int update(int a){
    int ans = a * a;
    return ans;
}

int main(){
    int a = 14;
    update1(a);
    cout << a << endl;

    update2(a);
    cout << a << endl;


    a = update(a);
    cout << a << endl;// i)10 // ii)15 // iii)196 
}