#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

bool isVowel(const char& c) {
  vector<char> vowels{'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
  for (char x : vowels) {
    if (c == x) return true;
  }

  return false;
}

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler = "";
  char c = kingdom[kingdom.size() - 1];
  if (c == 'y' || c == 'Y' ) ruler = "nobody";
  else if (isVowel(c)) ruler = "Alice";
  else ruler = "Bob";
  
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
