#include <iostream>
using namespace std;

string replace_Space(const string& str, int n) {
    string temp;

    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main() {
    string str = "Hello my name is Sudarshan";
    int n = str.length();

    string result = replace_Space(str, n);
    cout << "Modified string: " << result << endl;

    return 0;
}
