#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){

    int start = 0;
    int end = n-1;

    int mid =(start + (end - start)/2);

    while(start <= end){

        if(arr[mid] == key){
            return mid;

        }else if(key > arr[mid]) {
            start = mid + 1;

        }else{
            end = mid - 1;
        }

        mid =(start + (end - start)/2);
    }
    return -1;
}

int main(){

    int even[10] = {10, 20, 25, 45, 47, 69, 78, 90, 96, 99};
    int odd[7] = {10, 20, 69, 78, 90, 96, 99};

    int even_index = binarySearch(even, 10, 69);
    int odd_index = binarySearch(odd, 7, 78);

    cout <<"Index of 69 is "<< even_index << endl;
    cout <<"Index of 78 is "<< odd_index << endl;


    return 0;
}
