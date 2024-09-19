#include <iostream>
using namespace std;

int main() {
    int n, a, b, sum;
    cin >> n;
    while(n--){
        sum=0;
        cin >> a >> b;
        while (a<=b) {
            if(a%2==0) sum+=a;
            a++;
        }
        cout << sum << endl;
    }
    return 0;
}