#include<iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i=0; i<n; i++)cin >>arr[i];
    int count=0;
    for (int i=0; i<n; i++) {
        if (arr[i]!=0) {
            if (arr[i]>=arr[k-1] ) {
            count ++;
        }
    }
    }
    cout << count;
    return 0;
}


// By Aoyon
// #include <iostream>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int num[n];
//     int sum=0;
//     for(int i=0;i<n;i++){
//         cin>>num[i];
//     }
//     for(int i=0;i<n;i++){
//         if(num[i]!=0){
//             if(num[i]>=num[k-1]){
//                 sum++;
//             }
//         }
//     }
//     cout<<sum;
//     return 0;
// }