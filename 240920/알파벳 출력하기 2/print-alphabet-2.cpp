#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char a='A';
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (j>=i) {
                if (a=='Z'+1) a='A';
                cout << a << " ";
                a++;
            }
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}