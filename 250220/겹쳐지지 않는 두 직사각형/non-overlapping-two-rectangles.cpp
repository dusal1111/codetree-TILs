#include <iostream>

using namespace std;

int n, m;
int grid[5][5];
int prefix[6][6] = {};

// 사각형 넓이 계산
int getSum(int r1, int c1, int r2, int c2) {
    int sum = prefix[r2+1][c2+1] - prefix[r1][c2+1] - prefix[r2+1][c1] + prefix[r1][c1];
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            prefix[i+1][j+1] = grid[i][j] + prefix[i][j+1] + prefix[i+1][j] - prefix[i][j];
        }
    }

    int maxSum = -2000;

    // 첫 번째 직사각형 선택
    for (int r1 = 0; r1 < n; r1++) {
        for (int c1 = 0; c1 < m; c1++) {
            for (int r2 = r1; r2 < n; r2++) {
                for (int c2 = c1; c2 < m; c2++) {
                    int sum1 = getSum(r1, c1, r2, c2);
                    
                    // 두 번째 직사각형 선택
                    for (int r3 = 0; r3 < n; r3++) {
                        for (int c3 = 0; c3 < m; c3++) {
                            for (int r4 = r3; r4 < n; r4++) {
                                for (int c4 = c3; c4 < m; c4++) {
                                    // 두 직사각형이 겹치는지 확인
                                    if (r4 < r1 || r3 > r2 || c4 < c1 || c3 > c2) {
                                        int sum2 = getSum(r3, c3, r4, c4);
                                        maxSum = max(maxSum, sum1 + sum2);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << maxSum << endl;

    return 0;
}
