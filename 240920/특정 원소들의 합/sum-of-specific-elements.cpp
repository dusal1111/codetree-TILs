#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    int arr[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> n;
            arr[i][j] = n;
            if (i>=j) sum+=n;
        }
    }
    cout << sum;
    return 0;
}