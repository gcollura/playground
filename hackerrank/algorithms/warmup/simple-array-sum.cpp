#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int arr_i = 0; arr_i < n; arr_i++) {
    cin >> arr[arr_i];
  }
  int sum = 0;
  for (auto &i : arr) sum += i;
  cout << sum;
  return 0;
}
