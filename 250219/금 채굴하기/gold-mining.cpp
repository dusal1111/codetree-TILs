#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int n, m;
int grid[20][20];

int mine(int y, int x, int k) {
    int gain = 0;

    for (int dy = -k; dy <= k; dy++) {
        int row = y + dy;
        if (row >= 0 && row < n) {
            int width = k - abs(dy);
            for (int dx = -width; dx <= width; ++dx) {
                int col = x + dx;
                if (col >= 0 && col < n) {
                    gain += grid[row][col];
                }
            }
        }
    }

    return gain;
}

int main() {
    cin >> n >> m;

    int total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 1) total++;
        }
    }

    int max_gold = 0;
    for (int k = 0; k <= 2*(n-1) ; k++) {
        int cost = pow(k, 2) + pow(k + 1, 2);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int gain = mine(i, j, k);
                if (cost <= gain * m) max_gold = max(max_gold, gain);
            }
        }
    }

    cout << max_gold;
    return 0;
}
