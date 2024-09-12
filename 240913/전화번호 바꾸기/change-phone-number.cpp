#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string s1, s2, s3;
    s1 = s.substr(0,3);
    s2 = s.substr(3,5);
    s3 = s.substr(8,5);
    cout << s1 << s3 << s2;
    return 0;
}