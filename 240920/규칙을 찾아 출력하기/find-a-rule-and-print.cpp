#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        for (int j=n-i; j>0; j--){
            if (i==0 || j==1) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}