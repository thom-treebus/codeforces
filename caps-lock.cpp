#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main() {
  string s;
  cin >> s;
  bool caps = true;
  for(int i = 1; i < s.length(); ++i) {
    if (!isupper(s[i])) {
      caps = false;
    }
  }
  if (caps || (s.length() == 1 && islower(s[0]))) {
    s[0] = toupper(s[0]);
    for (int i = 1 ; i < s.length(); ++i) {
      s[i] = tolower(s[i]);
    }
  }

  cout << s << "\n";

  return 0;
}