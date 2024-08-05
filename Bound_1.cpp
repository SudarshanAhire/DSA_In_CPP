// It returns the no of occ. in element in the array
// return the index which elements first and last occurances 
#include<iostream>
using namespace std;

int first_Occ(int arr[], int size, int key){

    int s = 0;
    int e = size - 1;
    int ans_1 = -1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            ans_1 = mid;
            e = mid - 1;

        }else if(key > arr[mid]){
            s = mid + 1;

        }else if(key < arr[mid]){
            e = mid - 1;

        }
        mid = s + (e-s)/2;
    }
    return ans_1;
}

int last_Occ(int arr[], int size, int key){

    int s = 0;
    int e = size - 1;
    int ans_2 = -1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            ans_2 = mid;
            s = mid + 1;

        }else if(key > arr[mid]){
            s = mid + 1;

        }else if(key < arr[mid]){
            e = mid - 1;

        }
        mid = s + (e-s)/2;
    }
    return ans_2;
}

int main(){

    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 5, 6};

    int a = first_Occ(arr, 10, 3);
    int b = last_Occ(arr, 10, 3);

    cout<<"Number of occurences of number 3 is : "<< b - a + 1 << endl;

    return 0;
}