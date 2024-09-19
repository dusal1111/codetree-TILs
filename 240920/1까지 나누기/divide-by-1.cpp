#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d=1, c=0;
    while(n>1){
        n/=d;
        d++;
        c++;
    }
    cout << c;
    return 0;
}