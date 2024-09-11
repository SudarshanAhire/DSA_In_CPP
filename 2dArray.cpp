#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][4];
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};


    //for row wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // cout << endl;

    // // for column wise input
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cin >> arr[j][i];
    //     }
    // }

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int target;
    cout << "Enter the value you want to search " << endl;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Elephent found"<<endl;
    }else{
        cout <<"Not found";
    }



    return 0;
}