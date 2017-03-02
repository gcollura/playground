#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> x(n);
  for (int x_i = 0; x_i < n; x_i++) {
    cin >> x[x_i];
  }
  sort(x.begin(), x.end());

  int count = 0, j;
  for (int i = 0; i < n;) {
    j = i + 1;
    while (j < n && x[j] - x[i] <= k) {
      j++;
    }
    count++;
    while (i < n && x[i] - x[j - 1] <= k) {
      i++;
    }
  }

  cout << count << endl;
  return 0;
}
