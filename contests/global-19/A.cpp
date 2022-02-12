#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) { 
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      arr.push_back(x);
    } 

    bool sorted = true;
    
    for (int i = 0; i < n - 1; ++i) {
      if (arr[i] > arr[i+1]) sorted = false;
    }

    if (sorted) cout << "NO" << "\n";
    else cout << "YES" << "\n";
    

  }


  return 0;
}
