#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str;
    getline(cin, str1);
    getline(cin, str2);
    str = str1 + str2;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') continue;
        cout << str[i];
    }
    return 0;
}