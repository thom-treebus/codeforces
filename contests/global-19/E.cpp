#include <bits/stdc++.h>

using namespace std;

int count(int x, vector<int> &arr) {
  int count = 0;
  for (int num : arr) {
    if (num == x) ++count;
  }

  return count;
}

int f(int x, int y, vector<int>& arr) {
  return (count(x, arr) + count(y, arr)) * (x + y);
}

int main() {
  int t;
  cin >> t;
  while(t--) { 
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    unordered_map<int, int> map;
    for(int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      arr.push_back(x);
      map[x] = 1;
    } 

    vector<pair<int, int>> pairs;
    unordered_map<int, int> occurrences;
    for (int i = 0; i < m; ++i) {
      int x, y;
      cin >> x >> y;
      pairs.push_back(pair<int, int>(x,y));
      if (map.count(x) > 0 && map.count(y) > 0) {
        occurrences[x] = 1;
        occurrences[y] = 1;
      }
    }

    int maxSum = 0;

    for(pair<int, int> x : occurrences) {
      for (pair<int, int> y : occurrences) {
        int i, j;
        i = x.first;
        j = y.first;
        bool notBad = true;
        if (i != j) {
          for (pair<int, int> pair : pairs) {
            if (((pair.first == i && pair.second == j) || (pair.first = j && pair.second == i))) {
              notBad = false; 
            }
          }
          if (notBad) maxSum = max(f(i, j, arr), maxSum); 
        }
      }
    }

    cout << maxSum << "\n"; 
  }


  return 0;
}