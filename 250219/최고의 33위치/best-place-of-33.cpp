#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int max = 0;
    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            int tmp = grid[i - 1][j - 1] + grid[i][j - 1] + grid[i + 1][j - 1]
                + grid[i - 1][j] + grid[i][j] + grid[i + 1][j]
                + grid[i - 1][j + 1] + grid[i][j + 1] + grid[i + 1][j + 1];
            if (max < tmp) max = tmp;
        }
    }

    cout << max;
    return 0;
}
