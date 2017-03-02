#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int s = 5;
  vector<long int> v(s);
  long long min_sum = 0, max_sum = 0;
  for (int i = 0; i < s; i++) cin >> v[i];
  sort(v.begin(), v.end());
  for (int i = 0; i < s - 1; i++) min_sum += v[i];
  for (int i = s - 1; i > 0; i--) max_sum += v[i];
  cout << min_sum << ' ' << max_sum << endl;
  return 0;
}
