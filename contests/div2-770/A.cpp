#include <bits/stdc++.h>

using namespace std;


int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    string p = s; 
    reverse(p.begin(), p.end()); 
    bool isPalindrome = s == p; 
    int count = (k > 1 && !isPalindrome) ? 2 : 1; 
    cout << count << "\n";
     
    }

  return 0;
}

