#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int n){

    for(int i=0; i<n; i++){
        
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){

    int arr[5] = {2, 6, 9, 7, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    Bubble_Sort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }

    

    return 0;
}