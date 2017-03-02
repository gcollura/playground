#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parseInts(string str) {
  size_t n = std::count(str.begin(), str.end(), ',') + 1;
  vector<int> v(n);
  char c;
  stringstream ss(str);
  for (int i = 0; i < n; i++) {
    ss >> v[i] >> c;
  }
  return v;
}

int main() {
  string str;
  cin >> str;
  vector<int> integers = parseInts(str);
  for (int i = 0; i < integers.size(); i++) {
    cout << integers[i] << "\n";
  }

  return 0;
}
