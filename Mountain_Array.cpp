#include<iostream>
using namespace std;

int mountain_Array(int arr[]){

    int s = 0; 
    int e = arr[6] - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){

    int arr[6] = {1, 3, 4, 8, 5, 2};

    cout<<"Maximum element in array "<< mountain_Array(arr) << endl;

    return 0;
}