#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count=0;
    for (int i=0; i<n; i++) {
        int x1,x2,x3,sum=0;
        cin >> x1 >> x2 >> x3;
        sum +=x1+x2+x3;
        if (sum>1) {
            count++;
        }
    }
    cout << count;
    return 0;
}