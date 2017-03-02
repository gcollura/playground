#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> height(n);
  for (int height_i = 0; height_i < n; height_i++) {
    cin >> height[height_i];
  }
  // your code goes here
  int total = 0;
  for (int h : height) {
    if (h > k) {
      total += h - k;
      k = h;
    }
  }
  cout << total << endl;
  return 0;
}
