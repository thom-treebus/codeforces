#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> words;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    words.emplace_back(s);
  }

  for(string s : words) {
    if (s.size() <= 10) {
      cout << s << endl;
    } else {
      cout << s[0] << s.size() - 2 << s[s.size()-1] << endl;
    }
  }

  return 0;
}