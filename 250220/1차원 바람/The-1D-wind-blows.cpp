#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, q;

void wind(vector<vector<int>>& v, int r, char d) {
    if (d == 'L') { // 마지막 원소를 맨 앞으로
        rotate(v[r].begin(), v[r].end() - 1, v[r].end());
    }
    else // 앞 원소를 맨 뒤로
        rotate(v[r].begin(), v[r].begin() + 1, v[r].end());
}

void upSpread(vector<vector<int>>& v, int r, char d) {
    if (r < 0) return;
    bool valid = false;
    for (int i = 0; i < m; i++) {
        if (v[r][i] == v[r + 1][i]) {
            valid = true;
            break;
        }
    }

    if (valid) {
        if (d == 'L') d = 'R';
        else d = 'L';
        wind(v, r, d);
        upSpread(v, r - 1, d);
    }
}

void downSpread(vector<vector<int>>& v, int r, char d) {
    if (r == n) return;
    bool valid = false;
    for (int i = 0; i < m; i++) {
        if (v[r][i] == v[r - 1][i]) {
            valid = true;
            break;
        }
    }
    if (valid) {
        if (d == 'L') d = 'R';
        else d = 'L';
        wind(v, r, d);
        downSpread(v, r + 1, d);
    }
}

int main() {
    cin >> n >> m >> q;

    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            v[i][j] = tmp;
        }
    }

    for (int i = 0; i < q; i++) {
        int r; // 첫 바람 행
        char d; // L or R
        cin >> r >> d;

        r--;
        wind(v, r, d);
        upSpread(v, r - 1, d);
        downSpread(v, r + 1, d);
    }

    for (auto& row : v) {
        for (auto& col : row) {
            cout << col << " ";
        }
        cout << "\n";
    }

    return 0;
}
