#include <iostream>
using namespace std;

// // Littel more time but can input full matrix
// int main() {
//   int a[5][5], i, j, step = 0,k,l;
//   for (i = 0; i < 5; i++) {
//     for (j = 0; j < 5; j++) {
//       cin >> a[i][j];
//       if (a[i][j] == 1) {
//         k=i;
//         l=j;
//       }
//     }

//   }
//   if (k<2)step+=(2-k);else step+=(k-2);
//   if (l<2)step+=(2-l);else step+=(l-2);
//   cout << step;
//   return 0;
// }


// // Less time and memory
int main() {
  int a[5][5], i, j, step = 0;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      cin >> a[i][j];
      if (a[i][j] == 1) {
        break;
      }
    }
    if (a[i][j] == 1) {
      break;
    }
  }
  if (i<2)step+=(2-i);else step+=(i-2);
  if (j<2)step+=(2-j);else step+=(j-2);
  cout << step;
  return 0;
}