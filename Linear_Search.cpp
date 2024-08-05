#include<iostream>
using namespace std;

int linear(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(arr[i] == key){
            cout<< key ;
        }
    }
    
}

int main(){

    int arr[6] = {3, 5, 2, 6, 7, 1};

    cout <<" is at index "<< linear(arr, 6, 2)<<endl;

    return 0;
}