#include<iostream>
using namespace std;

int main(){

    int arr[5] = {7,5,9,4,2};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}