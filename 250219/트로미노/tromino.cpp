#include <iostream>

using namespace std;

int n, m;
int grid[200][200];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Write your code here!

    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < n-1 && j < m - 1) {
                int tmp = grid[i][j] + grid[i+1][j] + grid[i][j+1] + grid[i+1][j+1];
                if (max < tmp-grid[i][j]) max = tmp-grid[i][j];
                if (max < tmp-grid[i+1][j]) max = tmp-grid[i+1][j];
                if (max < tmp-grid[i][j+1]) max = tmp-grid[i][j+1];
                if (max < tmp-grid[i+1][j+1]) max = tmp-grid[i+1][j+1];
            }
            if (j<m-2){
                int tmp = grid[i][j] + grid[i][j+1] + grid[i][j+2];
                if (max < tmp) max = tmp;
            }
            if (i<n-2){
                int tmp = grid[i][j] + grid[i+1][j] + grid[i+2][j];
                if (max < tmp) max = tmp;
            }
        }
    }

    cout << max;
    return 0;
}
