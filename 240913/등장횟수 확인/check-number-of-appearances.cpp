#include <iostream>
using namespace std;

int main() {
    int cnt = 0, t=5, n;
    while (t--){
        cin >> n;
        if (n%2==0) cnt++;
    }
    cout << cnt;
    return 0;
}