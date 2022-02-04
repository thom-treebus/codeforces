#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<char> hello;
  hello.emplace_back('h');
  hello.emplace_back('e');
  hello.emplace_back('l');
  hello.emplace_back('l');
  hello.emplace_back('o');

  for(int i = 0; i < s.size(); ++i) {
    if (hello.size() > 0 && hello[0] == s[i]) {
        hello.erase(hello.begin());
    }
  }

  if (hello.size() == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}