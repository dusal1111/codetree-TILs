#include <iostream>

using namespace std;

int n, t;
int arr[600];

int main() {
    cin >> n >> t;

    for (int i = 0; i < 3*n; i++) cin >> arr[i];

    int idx = ((3*n) - (t % (3*n))) % (3*n);

    for(int i=0; i<3*n; i++){
        if (i==n||i==2*n) cout << "\n";
        cout << arr[(idx+i)%(3*n)] << " ";
    }

    return 0;
}
