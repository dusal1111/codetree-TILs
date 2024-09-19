#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt=0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if (i%2==0) cnt+=2;
            else cnt++;
            cout << cnt << " ";
        }
        cout << "\n";
    }
    return 0;
}