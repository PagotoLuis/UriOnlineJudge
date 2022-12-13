#include <iostream>

using namespace std;

int main(){
      unsigned long long int sum[60];
      int n, i, j;
      cin >> n;
      for (i=0; i<=60; i++) {
            if (i == 0) {sum[i] = 0;
            }else if (i == 1) {sum[i] = 1;
                }else {
                sum[i] = sum[i-1] + sum[i-2];
                }
      }

      for (j=0; j<n; j++) {
            cin >> i;
            cout << "Fib(" << i << ") = " << sum[i] << endl;
      }

      return 0;
}
