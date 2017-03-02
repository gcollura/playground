#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

bool pivot_exists(const vector<int> &a) {
  int len = a.size();
  int left = 0, right = len - 1;
  int left_sum = a[left], right_sum = a[right];
  while (left < right) {
    if (left_sum < right_sum)
      left_sum += a[++left];
    else
      right_sum += a[--right];
  }
  if (left_sum == right_sum) return true;
  return false;
}

int main() {
  int t, n;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    vector<int> nums(n);
    for (int &i : nums) cin >> i;
    if (pivot_exists(nums))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
