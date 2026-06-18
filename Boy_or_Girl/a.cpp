#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n=s.length(),x=n;
    for (int i=0; i<s.length(); i++) {
        char ch = s[i];
        for (int j=i+1; j<s.length(); j++) {
            if (s[j]==s[i]) {
                s[i]= '0';
                x--;
            }
        }
    }
    if ((x%2)==0) {
        cout <<"CHAT WITH HER!";
    } else {
        cout <<"IGNORE HIM!";
    }
    return 0;
}
