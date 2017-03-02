#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  int n, k, v;
  cin >> n >> k;
  unordered_set<int> nums;
  for (int i = 0; i < n; i++) {
    cin >> v;
    nums.insert(v);
  }

  int pairs = 0;
  for (auto &v : nums)
    if (nums.count(v - k) > 0) pairs++;

  cout << pairs << endl;

  return 0;
}
