#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  int i = 1;
  while (i <= t) {
    string s, f;
    cin >> s >> f;
    int count = 0;
    
    for (char c : s) {
        int minDistance = INT_MAX;
        for (char x : f) {
            char distance = abs(c-x);
            if (distance > 13) {
              distance = 26 - distance;
            }
            if (distance < minDistance) minDistance = distance;
        }
        count += minDistance;
    }
    cout << "Case #" << t << ": " << count << "\n";
    ++i;
  }
  return 0;
}