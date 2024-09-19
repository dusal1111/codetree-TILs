#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    char c[20];
    int len[20];

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        c[i]=str[0];
        len[i]=str.length();
    }
    char a;
    cin >> a;
    int cnt=0, sum=0;
    for(int i=0;i<n;i++){
        if (c[i]!=a) continue;
        cnt++;
        sum+=len[i];
    }
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << (float)sum/cnt;
    return 0;
}