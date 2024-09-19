#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int min, max;
    min=max=str.length();
    cin >> str;
    if (str.length() > max) max=str.length();
    else min=str.length();
    cin >> str;
    if(min>str.length())min=str.length();
    else if (max < str.length()) max=str.length();
    cout << max-min;

    return 0;
}