#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    int i = n;
    while (i--){
        a+=n;
        cout << a << "\n";
    }
    return 0;
}