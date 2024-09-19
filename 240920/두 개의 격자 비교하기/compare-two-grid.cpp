#include <iostream>
using namespace std;

int** ff(int** arr, int n, int m) {
    int a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a;
            arr[i][j] = a;
        }
    }
    return arr;
}

int main() {
    int n, m;
    cin >> n >> m;
    int** arr1 = new int* [n];
    int** arr2 = new int* [n];
    for (int i = 0; i < n; i++) {
        arr1[i] = new int[m];
        arr2[i] = new int[m];
    }

    arr1 = ff(arr1, n, m);
    arr2 = ff(arr2, n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i][j] == arr2[i][j]) cout << 0 << " ";
            else cout << 1 << " ";
        }
        cout << "\n";
    }
    return 0;

}