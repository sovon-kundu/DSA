#include<iostream>
using namespace std;

int main() {
    int x;
    cin >>x;
    int step=0;
    while (x!=0) {
        if (x>5) {
            step += x/5;
            x%=5;
        } else if (x==5) {
            step +=1;
            x=0;
        } else if (x==4) {
            step +=1;
            x=0;
        } else if (x==3) {
            step +=1;
            x=0;
        } else if (x==2) {
            step +=1;
            x=0;
        } else if (x==1) {
            step +=1;
            x=0;
        }
    }
    cout << step;
    return 0;
}