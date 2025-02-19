#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int happy = 0;
    for (int i = 0; i < n; i++) {
        int prev = 0;
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (prev == grid[i][j]) cnt++;
            else cnt = 0;
            if (cnt >= m-1) {
                happy++;
                break;
            }
            prev = grid[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int prev = 0;
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (prev == grid[j][i]) cnt++;
            else cnt = 0;
            if (cnt >= m-1) {
                happy++;
                break;
            }
            prev = grid[j][i];
        }
    }

    cout << happy;
    return 0;
}
