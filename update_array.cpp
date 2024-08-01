#include<iostream>
using namespace std;

void update(int arr[], int size){

    cout<<"Inside the function "<<endl;

    arr[0] = 100;

    for(int i=0; i<=size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main function "<< endl;
}

int main(){

    int arr[4] = {1, 2, 3, 4};

    update(arr, 4);

    cout<<"Printing in main function "<<endl;
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}