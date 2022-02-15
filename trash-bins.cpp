#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  int count = 1;
  while(t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = 0;
    int left, right;

    for (int i = 0; i < n; ++i) {
      if (s[i] == '1') left = i;
      if (s[i] == '0') {
        right = i;
        while (right < n) {
          if (s[right] == '0') ++right;
          else {
            ++right;
            break;
          };
        }
        result += min(i - left, right - i);
        
      }
    }

    cout << "Case #" << count << ": " << result << "\n";
    ++count;
  }
  return 0;
}