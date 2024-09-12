#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    while (n--){
        cin >> num;
        if (num%2==1 && num%3==0) cout << num << "\n";
    }
    return 0;
}