#include <iostream>
using namespace std;

int main() {
    int n, a, b, sub=100;
    cin >> n;
    cin >> a;
    for (int i=1; i<n; i++){
        b=a;
        cin >> a;
        if (sub > a-b) sub=a-b;
    }
    cout << sub;
    return 0;
}