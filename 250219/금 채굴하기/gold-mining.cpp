#include <iostream>
#include <math.h>

using namespace std;

int n, m;
int grid[20][20];

int mine(int y, int x, int k) {
    int gain = 0;

    int move = k;
    for(int i=y; i >= y-k; i--){
        for(int j=x-move; j<=x+move; j++){
            if (i < n && j < n && grid[i][j]==1){
                gain++;
            }
        }
        move--;
    }
    move = k-1;
    for(int i=y+1; i<= y+k; i++){
        for(int j=x-move; j<=x+move; j++){
            if (i < n && j < n && grid[i][j]==1){
                gain++;
            }
        }
        move--;
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

    // Write your code here!
    int max = 0;
    for (int k=0; pow(k, 2) + pow(k+1, 2) <= total * m; k++){
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int gain = mine(i,j,k);
                if (pow(k, 2) + pow(k+1, 2)<= gain*m && max < gain) max = gain;
            }
        }
    }
    
    cout << max;
    return 0;
}
