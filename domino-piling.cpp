#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  int result;
  if (m % 2 == 0 && n % 2 == 0) {
    result = m * (n/2);
  } else if (m % 2 == 0 && n % 2 != 0) {
    result = m/2 * n;
  } else if (n % 2 == 0 && m % 2 != 0) {
    result = n/2 * m;
  } else {
    result = ((m*n)-1)/2;
  }

  cout << result << endl;
  
  return 0;
}