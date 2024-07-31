#include<iostream>
using namespace std;

bool isEven(int a){

    if(a & 1){
        return 0;
    }

    return 1;
}

int main(){

    int num;
    cin>>num;
    int ans = isEven(num);
   
    if((isEven(num)) == 0){
        cout <<"Num is odd "<<endl;
    }else{
        cout <<"Num is even "<<endl;
    }

    return 0;
}