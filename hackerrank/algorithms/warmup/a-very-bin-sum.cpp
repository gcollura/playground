#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> arr(n);
  long long result = 0;

  for (int arr_i = 0; arr_i < n; arr_i++) {
    cin >> arr[arr_i];
  }
  for (int i = 0; i < n; i++) {
    result += (long long) arr[i];
  }
  cout << result;

  return 0;
}
