#include <iostream>
using namespace std;

int main() {
    int a[10];
    int n;
    for (int i=0;i<10;i++){
        cin >> n;
        a[i] = n;
    }
    cout << a[2]+a[4]+a[9];
    return 0;
}