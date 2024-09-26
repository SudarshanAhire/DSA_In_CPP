#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){

    if(i > j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }else{
        checkPalindrome(str, i+1, j-1);
    }
}

int main(){

    string str = "sudarshan";

    bool isPalindrome = checkPalindrome(str, 0, str.length()-1);

    if(isPalindrome){
        cout << "string is palindrome"<< endl;
    }else{
        cout <<"string is not plaindrome"<<endl;
    }

    return 0;
}