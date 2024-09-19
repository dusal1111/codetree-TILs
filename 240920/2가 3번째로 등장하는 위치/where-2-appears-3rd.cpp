#include <iostream>
using namespace std;

int main() {
    int n, a, cnt=0;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a;
        if (a==2) cnt++;
        if (cnt==3){
            cout << i;
            break;
        }
    }
    return 0;
}