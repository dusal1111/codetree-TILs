#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int exist=0;
    while (a<b){
        if(1920%a==0 || 2880%a==0) {
            exist=1;
            break;
        }
        a++;
    }
    cout << exist;
    return 0;
}