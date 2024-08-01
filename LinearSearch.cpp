#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i=0; i<=size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10] = {2, 4, 5, 6, 7, 33, 1, 35, 65, 23};

    cout<<"Enter the element you want to insert : ";
    int key;
    cin>>key;

    bool found = search(arr, 10 ,key);

    if(found){
        cout<<"Key is found at index "<< endl;
    }else{
        cout<<"Key is not found "<< endl;
    }

    return 0;
}