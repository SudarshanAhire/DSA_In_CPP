#include<iostream>
using namespace std;

int main(){

    int Amt;
    cin>>Amt;
    int n = Amt;


    switch(Amt){

        case 1 : cout<<(Amt/100)<<endl;
            break;

        Default : cout<<"Invalid choise"<<endl;
            break;
    }

    return 0;
}