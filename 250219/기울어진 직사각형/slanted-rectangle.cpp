#include <iostream>
#include <algorithm>

using namespace std;

int n;
int grid[20][20];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int maxSum = 0;
    // 모든 시작점 (i, j)에서 가능한 기울어진 직사각형 탐색
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // h: 1, 3번 거리, w: 2, 4번 거리
            for (int h = 1; h < 2*(n-1); h++) { 
                for (int w = 1; w < 2*(n-1); w++) {

                    int x = i, y = j, sum = 0; //x: row, y:col
                    bool valid = true;

                    // 3번 대각선 이동
                    for (int k = 0; k < h; k++) {
                        x += 1, y -= 1;
                        if (x >= n || y < 0) { valid = false; break; }
                        sum += grid[x][y];
                    }
                    if (!valid) continue;

                    // 4번 대각선 이동
                    for (int k = 0; k < w; k++) {
                        x += 1, y += 1;
                        if (x >= n || y >= n) { valid = false; break; }
                        sum += grid[x][y];
                    }
                    if (!valid) continue;

                    // 1번 대각선 이동
                    for (int k = 0; k < h; k++) {
                        x -= 1, y += 1;
                        if (x < 0 || y >= n) { valid = false; break; }
                        sum += grid[x][y];
                    }
                    if (!valid) continue;

                    // 2번 대각선 이동
                    for (int k = 0; k < w; k++) {
                        x -= 1, y -= 1;
                        if (x < 0 || y < 0) { valid = false; break; }
                        sum += grid[x][y];
                    }
                    if (!valid) continue;

                    maxSum = max(maxSum, sum);
                }
            }
        }
    }
    cout << maxSum;

    return 0;
}
