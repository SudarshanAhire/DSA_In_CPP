#include<iostream>
using namespace std;

void printSum_rowwise(int arr[][4], int i, int j){
    cout <<"Printing the sum row wise--> "<< endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum = sum + arr[i][j] ;
        }
        cout << sum << endl;
    }
    cout << endl;
}

void printSum_columnwise(int arr[][4], int i, int j){
    cout <<"Printing the sum column wise--> "<< endl;
    for(int j=0; j<4; j++){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum = sum + arr[i][j] ;
        }
        cout << sum << endl;
    }
    cout << endl;
}

int largestRowSum(int arr[][4], int row, int col){

    int maxi = INT32_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum = sum + arr[row][col];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }

    cout <<"The maximum sum is "<< maxi << endl;
    return rowIndex;
}

int main(){

    int arr[3][4];

    cout <<"Enter the elephent which you want to insert "<< endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    cout <<"The arr of elephent" << endl;
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printSum_rowwise(arr, 3 , 4);
    printSum_columnwise(arr, 3 , 4);

    int ansIndex = largestRowSum(arr, 3, 3);
    cout <<"Max row is at index "<< ansIndex << endl;


    return 0;
}