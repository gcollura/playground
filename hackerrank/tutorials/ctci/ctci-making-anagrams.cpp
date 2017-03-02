#include <iostream>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
  int result = 0;
  unordered_map<char, int> m;
  for (char &c : a) m[c]++;
  for (char &c : b) m[c]--;
  for (auto &p : m)
    if (p.second != 0) result += abs(p.second);
  return result;
}

int main() {
  string a, b;
  cin >> a >> b;
  cout << number_needed(a, b) << endl;
  return 0;
}
