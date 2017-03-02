#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int get_sum(const vector<vector<int>> &m, int x, int y) {
  int sum = 0;
  for (int i = y; i < y + 3; i++) {
    sum += m[x][i];
  }
  sum += m[x + 1][y + 1];
  for (int i = y; i < y + 3; i++) {
    sum += m[x + 2][i];
  }
  return sum;
}

int main() {
  vector<vector<int>> arr(6, vector<int>(6));
  for (int arr_i = 0; arr_i < 6; arr_i++) {
    for (int arr_j = 0; arr_j < 6; arr_j++) {
      cin >> arr[arr_i][arr_j];
    }
  }
  int max = INT_MIN, sum;
  for (int i = 0; i < 6 - 2; i++) {
    for (int j = 0; j < 6 - 2; j++) {
      sum = get_sum(arr, i, j);
      if (sum > max) max = sum;
    }
  }
  cout << max << endl;
  return 0;
}
