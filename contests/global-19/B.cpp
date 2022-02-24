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

    int result = -1;
    int sum = 0;
    for (int i = 1; i < n - 1; ++i) {
      sum+= arr[i];
    }

    // if (sum % 2 != 0) {
    //   cout << result << "\n";
    // } else {
    //   cout << result/2 << "\n";
    // }
    while (true) {
      
    }

<<<<<<< HEAD
    cout << result << "\n"; 
=======
    for (int i = 1; i < n -1; ++i) {
      
    }

    
>>>>>>> c7daaf9f494a96f630409ff74f779f6db63333b4
  }
  // 1 1 1 1 1 1


  return 0;
}