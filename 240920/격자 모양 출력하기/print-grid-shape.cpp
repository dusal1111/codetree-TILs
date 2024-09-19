#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[10][10]={0};
    int a,b;
    while(m--){
        cin >> a >> b;
        arr[a-1][b-1]=a*b;
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}