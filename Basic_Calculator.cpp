#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter value of a " ;
    cin >> a;

    cout << "Enter value of b " ;
    cin >> b;

    char op;
    cout << "Enter the operation you want to perform " << endl;
    cin >> op;

    switch (op)
    {
    case '+': cout << (a + b) << endl;
        break;

    case '-': cout << (a - b) << endl;
        break;

    case '*': cout << (a * b) << endl;
        break;

    case '/': cout << (a / b) << endl;
        break;

    case '%': cout << (a % b) << endl;
        break;
    
    default: cout << "Invalid choise"<< endl;
        break;
    }



    return 0;
}
    
    