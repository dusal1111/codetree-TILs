#include <iostream>
using namespace std;

int main() {
    int n, cnt=1;
    cin >> n;

    int **arr= new int*[n];
    for(int i=0;i<n;i++) arr[i] = new int[n];

    for (int i=n-1, ii=1; i>=0; i--, ii++) {
        if (ii%2!=0){
            for (int j=n-1; j>=0; j--){
                arr[j][i]=cnt;
                cnt++;
            }
        }
        else {
            for(int j=0; j<n; j++){
                arr[j][i]=cnt;
                cnt++;
            }
        }
    }

    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}