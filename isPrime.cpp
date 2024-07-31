#include<iostream>
using namespace std;

bool isPrime(int n){
    
    for(int i=2; i<n; i++){

        if(n%i==0){
            return 0;
        }
    }

    return 1;

}


int main(){

    int n;
    cin>>n;
    isPrime(n);

    if((isPrime(n)==0)){
        cout<<"number is not prime"<<endl;
    }else{
        cout<<"number is prime"<<endl;
    }

    return 0;
}