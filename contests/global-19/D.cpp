#include <bits/stdc++.h>

using namespace std;

int totalCost(vector<int>& arr) {
  int cost = 0;
  for (int i = 0; i < arr.size(); ++i) {
    for (int j = 0; j < arr.size(); ++j) {
      if (i != j) cost += (arr[i] + arr[j]) * (arr[i] + arr[j]);
    }
  }
  return cost / 2;
}

int main() {
  int t;
  cin >> t;
  while(t--) { 
    int n;
    cin >> n;
    vector<int> arr1;
    vector<int> arr2;
    for(int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      arr1.push_back(x);
    } 

    for(int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      arr2.push_back(x);
    } 

    int minCost = (totalCost(arr1) + totalCost(arr2));

    for (int i = 0; i < n; ++i) {

      int temp = arr1[i];
      arr1[i] = arr2[i];
      arr2[i] = temp;

      int cost = (totalCost(arr1) + totalCost(arr2));
      minCost = min(minCost, cost);
    }

    cout << minCost << "\n"; 
  }


  return 0;
}