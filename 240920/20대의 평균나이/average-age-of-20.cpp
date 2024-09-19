#include <iostream>
using namespace std;

int main() {
    int age, aver=0, cnt=0;
    while (1){
        cin >> age;
        if (age <20 || age>29) break;
        aver+=age;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (float)aver/cnt;
    return 0;
}