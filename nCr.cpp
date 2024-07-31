#include<iostream>
using namespace std;

int factorial(int n){

    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){

    int num = factorial(n);

    int deno = factorial(r) * factorial(n-r);

    int ans = num/deno;

    return ans;

}

int main(){

    int n, r;
    cin>>n>>r;

    cout<<"nCr of (n,r) are " << nCr(n,r) << endl;



    return 0;
}