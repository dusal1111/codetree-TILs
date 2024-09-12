#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    int aver = sum/3;
    int total = sum-aver;
    cout << sum << "\n" << aver << "\n" << total;
    return 0;
}