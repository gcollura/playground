#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
  int n, m, v;
  cin >> n;
  map<int, int> nums;
  for (int i = 0; i < n; i++) {
    cin >> v;
    nums[v]++;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> v;
    nums[v]--;
  }

  set<int> missing_nums;
  for (auto &p : nums) {
    if (p.second != 0) {
      missing_nums.insert(p.first);
    }
  }

  for (auto &n : missing_nums) cout << n << ' ';

  return 0;
}
