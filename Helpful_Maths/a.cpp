#include<iostream>
using namespace std;

int main() {
    string s;
    cin >>s;
    int num1=0,num2=0,num3=0;
    for (int i=0; i<s.length(); i+=2) {
        if (s[i]=='1') {
            num1++;
        } else if (s[i]=='2') {
            num2++;
        } else {
            num3++;
        }
    }
    string t,u,v,w;
    for (int i=0; i<num1*2; i+=2) {
        t+="1+";
    }
    for (int i=0; i<num2*2; i+=2){
        u+="2+";
    }
    for (int i=0; i<num3*2; i+=2){
        v+="3+";
    }
    s=(t+u+v);
    for (int i=0; i<s.length()-1; i++){
        w+=s[i];
    }
    cout << w;
    return 0;
}