#include<iostream>
using namespace std;

void quickSort(int arr[], int s, int e){

    if(s <= e){
        return ;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);
    
}

int main(){

    int arr[5] = {7,5,9,4,2};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}