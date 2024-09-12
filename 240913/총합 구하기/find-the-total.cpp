#include <iostream>
using namespace std;

int main() {
    int a, b, sum=0;
    cin >> a >> b;
    while (a<=b){
        if (a%6==0 && a%8!=0) sum+=a;
        a++;
    }
    cout << sum;
    return 0;
}