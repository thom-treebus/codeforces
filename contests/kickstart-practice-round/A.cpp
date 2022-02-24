#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  int count = 1;
  while(t--) { 
    int remaining = 0;

    int n, m;
    cin >> n >> m;

    // vector<int> c;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
      int num;
      cin >> num;
      sum += num;
      // c.push_back(num);
    }

    remaining = sum % m;

    cout << "Case #" << count << ": " << remaining << "\n";
    ++count;
  }

  return 0;
}