#include <iostream>
using namespace std;

int main() {
    int a=5, b=6, c=7;
    int aa, bb, cc;
    aa=a; bb=b; cc=c;
    b = aa;
    c = bb;
    a = cc;
    cout << a << "\n" << b << "\n" << c; 
    return 0;
}