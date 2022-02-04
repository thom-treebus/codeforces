#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> problems;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    problems[0].emplace_back(x);
  }

  for(vector<int> v : problems) {
    for (int i = 0; i <= (int) v.size() - 1; ++i) {
      cout << v[i] << " ";
    }
    cout << endl;
  }

  return 0;
}