#include <bits/stdc++.h>
#include <iostream>
using namespace std;


/*
0 1 2 3 4 5 6 7

5 2 = 8
4 1 = 4

4 1 -> 1
1 1 1 1

4 2 -> 5
1 1 1 1 
1 1 2 
1 2 1 
2 1 1 
2 2 

4 3 -> 3
1 1 1 1 
1 3
3 1

4 4 -> 1
4

5 1 = 1
5

5 2 = 8
1 1 1 1 1 
2 1 1 1
1 2 1 1
1 1 2 1
1 1 1 2
2 2 1
1 2 1
1 2 2

5 3 = 13
1 1 1 1 1 
2 1 1 1
1 2 1 1
1 1 2 1
1 1 1 2
2 2 1
1 2 1
1 2 2
1 1 3
1 3 1
3 1 1
2 3
3 2

5 4 = 3

5 5

*/

int main() {
  int n, maxSteps;
  cin >> n >> maxSteps;

  int count = 0;
  vector<int> steps(n + 1);
  steps[0] = 1;
  steps[1] = 1;
  steps[2] = 2;

  for (int i = 3; i <= n; ++i) {
    for (int j = 1; j < maxSteps + 1; ++j) {
      steps[i] += steps[i-j];
    }
  }

  if (maxSteps == 1) {
    cout << 1 << endl;
  } else {
    cout << steps[n] << "\n";
  }
  


  return 0;
}