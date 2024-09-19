#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100]={0};
    int a, idx=0;
    while(n--){
        cin >> a;
        if (a%2==0) {
            arr[idx]=a;
            idx++;
        }
    }
    for (int i=idx-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}