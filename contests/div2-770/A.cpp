#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string& s) {
  string p = s;
  reverse(p.begin(), p.end());
  return s==p;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int count = 1;
    if (k > 1 && !isPalindrome(s)) {
      count = 2;
    } else {
      count = 1;
    }
    cout << count << "\n";
    }

  return 0;
}

