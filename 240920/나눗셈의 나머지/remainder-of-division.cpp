#include <iostream>
using namespace std;

int main() {
    int a,b,r;
    cin >> a>>b;
    int arr[10]={};
    while (a>1){
        r=a%b;
        a/=b;
        arr[r]+=1;
    }
    int sqr, sum=0;
    for(int i=0; i<10; i++){
        sqr=arr[i]*arr[i];
        sum+=sqr;
    }
    cout << sum;
    return 0;
}