#include <bits/stdc++.h>
using namespace std;

vector<int> GetHIndexScore(vector<int> citations_per_paper) {
  vector<int> h_index;
  // TODO: Calculate and return h-index score for each paper.
  vector<int> sorted;
  sorted.push_back(1);
  h_index.push_back(1);
  for (int i = 1; i < citations_per_paper.size(); ++i) {
    int citations = citations_per_paper[i];
    int x = 0;
    while (x < sorted.size()) {
      if (citations <= sorted[sorted.size() - 1]) {
        sorted.push_back(citations);
        break;
      } else {
        if (citations >= sorted[x]) {
          sorted.insert(sorted.begin() + x, citations);
          break;
        }
      }
      ++x;
    }
    int count = 0;
    for (int j = 0; j < sorted.size(); ++j) {
      count += 1;
      if (count >= sorted[j]) {
        h_index.push_back(count - 1);
      }
    }
    // h_index.push_back(h);
  }
  return h_index;
}

int main() {
  int tests;
  cin >> tests;
  for (int test_case = 1; test_case <= tests; test_case++) {
    // Get number of papers for this test case
    int paper_count;
    cin >> paper_count;
    // Get number of citations for each paper
    vector<int> citations(paper_count);
    for (int i = 0; i < paper_count; i++) {
      cin >> citations[i];
    }
    vector<int> answer = GetHIndexScore(citations);
    cout << "Case #" << test_case << ": ";
    for (int i = 0; i < answer.size(); i++) {
      cout << answer[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
