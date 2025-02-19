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
        int cnt = 0;
        for (int j = 1; j < n; j++) {
            if (grid[i][j-1] == grid[i][j]) cnt++;
            if (cnt >= m-1) {
                happy++;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 1; j < n; j++) {
            if (grid[j-1][i] == grid[j][i]) cnt++;
            if (cnt >= m-1) {
                happy++;
                break;
            }
        }
    }

    cout << happy;
    return 0;
}
