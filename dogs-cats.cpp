#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  int count = 1;
  while(t--) {
    int n, d, c, m;
    cin >> n >> d >> c >> m;
    string s;
    cin >> s;
    string result = "";
    

    int totalDogs = 0;
    int dogs = 0;
    for (char animal : s) {
      if (animal == 'D') ++totalDogs;
    }
    if (totalDogs == 0) result = "YES";
    else {
      for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'D') {
          if (d < 1) {
            result = "NO";
            break;
          }
          --d;
          ++dogs;
          c += m;
          if (dogs == totalDogs) {
            result = "YES";
            break;
          }
        } else {
          if (c < 1 && dogs < totalDogs) {
            result = "NO";
            break;
          }
          --c;
        }
    }
    }
    cout << "Case #" << count << ": " << result << "\n";
    ++count;
  }
  return 0;
}