// return the index which elements first and last occurances 
#include<iostream>
using namespace std;

int first_Occ(int arr[], int size, int key){

    int s = 0;
    int e = size - 1;
    int ans = -1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;

        }else if(key > arr[mid]){
            s = mid + 1;

        }else if(key < arr[mid]){
            e = mid - 1;

        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int last_Occ(int arr[], int size, int key){

    int s = 0;
    int e = size - 1;
    int ans = -1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;

        }else if(key > arr[mid]){
            s = mid + 1;

        }else if(key < arr[mid]){
            e = mid - 1;

        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 5, 6};

    cout <<"First occurence of 3 is "<<first_Occ(arr, 10, 3)<<endl;
    cout <<"Last occurence of 3 is "<<last_Occ(arr, 10, 3)<<endl;


    return 0;
}