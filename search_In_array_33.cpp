#include<iostream>
using namespace std;

void isPresent(int *arr, int size, int key){

    if(arr[] == 0){
        return false;
    }
    
    if(arr[0] == key){
        return true;
    }
    int remainingPart = isPresent(arr+1, size-1);
        return remainingPart;
}

int main(){

    int arr[] ={1,2,3,4,5,6};
    int size = 6;
    int key = 4;

    int ans = isPresent(arr, size, key);

    if(ans){
        cout << "present"<< endl;
    }else{
        cout <<"absent" << endl;
    }

    return 0;
}