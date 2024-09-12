#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << ((a>b)?1:0) << "\n"
        << ((a>c)?1:0) << "\n"
        << ((a>d)?1:0) << "\n"
        << ((a>e)?1:0);
    return 0;
}