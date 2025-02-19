#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int grid[20][20];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int maxsize = -1;
    // 시작점
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (grid[i][j] <= 0) continue;
            // 끝점
            int last = m;
            for(int k=i; k<n; k++){
                if (grid[k][j] <= 0) break;
                for (int l=j; l<last; l++){
                    if (grid[k][l] <= 0) {
                        last = l;
                        break;
                    }
                    int size = (k-i+1) * (l-j+1);
                    maxsize = max(size, maxsize);
                }
            }
        }
    }

    cout << maxsize;

    return 0;
}
