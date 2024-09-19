#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt=9;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (cnt==0) cnt=9;
            cout << cnt;
            cnt--;
        }
        cout << "\n";
    }
    return 0;
}