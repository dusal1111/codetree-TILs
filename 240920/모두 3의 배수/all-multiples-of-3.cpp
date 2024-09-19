#include <iostream>
using namespace std;

int main() {
    int a, tri=0, n=5;
    while(n--){
        cin >> a;
        if (a%3==0) tri++;
    }
    if (tri==5) cout << 1;
    else cout <<0;
    return 0;
}