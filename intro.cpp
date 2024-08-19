#include<iostream>
using namespace std;

char lowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        int temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n){

    int s = 0; 
    int e = n - 1;

    while(s<=e){

        if(lowerCase(name[s]) != lowerCase(name[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){

    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int length(char name[]){

    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];

    cout <<"Enter your name ";
    cin >> name;

    cout <<"your name is ";
    cout << name;

    int len = length(name);
    cout << " length is " << len << endl;

    reverse(name, len);
    cout<<"reverse is";
    cout << name << endl;

   cout <<"chack palindrome "<< checkPalindrome(name, len) << endl;


    return 0;
}