#include <iostream>

using namespace std;

int n, t;
int arr[400];

int main() {
    cin >> n >> t;

    for (int i = 0; i < 2*n; i++) cin >> arr[i];

    int idx = (2*n - (t%(2*n)))%(2*n);

    for (int i = 0; i<n; i++) cout << arr[(i+idx)%(2*n)] << " ";
    cout << "\n";
    for (int i = n; i< 2*n; i++) cout << arr[(i+idx)%(2*n)] << " ";

    return 0;
}
