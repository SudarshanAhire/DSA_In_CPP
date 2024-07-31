#include<iostream>
using namespace std;

void fibonaci(int n, int a, int b){

    int sum = a+b;
    for(int i=1; i<=n; i++){
        a = b;
        b = sum;
    }
    cout<<sum;

}        

int main(){

    int n;
    int a;
    int b;
    cin>>n;
    fibonaci(n, a, b);

    return 0;
}