#include<iostream>
using namespace std;

void print_Array(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}

void swap_Alternet(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

int main(){

    int even[8] = {2, 4, 7, 3, 9, 0, 6, 1};
    int odd[7] = {1, 2, 3, 4, 5, 6, 7};

    swap_Alternet(even, 8);
    print_Array(even, 8);

    cout << endl;

    swap_Alternet(odd, 7);
    print_Array(odd, 7);



    return 0;
}