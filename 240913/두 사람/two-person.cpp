#include <iostream>
using namespace std;

int main() {
    int a, b;
    char aa, bb;
    cin >> a >> aa >> b >> bb;
    if ((a>=19 && aa=='M')||(b>=19&&bb=='M')) cout << 1;
    else cout <<0;
    return 0;
}