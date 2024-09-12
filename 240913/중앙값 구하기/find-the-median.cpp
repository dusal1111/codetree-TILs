#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((b > a && b < c)|| (b < a && b > c)) cout << b;
    else if ((a > b && a < c) || (a >c && a<b) ) cout << a;
    else cout << c;
    return 0;
}