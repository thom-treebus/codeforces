#include <bits/stdc++.h>
#include <iostream>
#include <string> 
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> statements;
  
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    statements.emplace_back(s);
  }

  int x = 0;

  for(string s: statements) {
    if (s[1] == '+') {
      ++x;
    }
    if (s[1] == '-') {
      --x;
    }
  }

  cout << x << endl;

  return 0;
}