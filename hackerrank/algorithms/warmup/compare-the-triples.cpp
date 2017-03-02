#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define N 3

int main() {
  vector<int> a(N);
  vector<int> b(N);
  vector<int> score(2, 0);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < N; i++) {
    if (a[i] > b[i]) score[0]++;
    if (a[i] < b[i]) score[1]++;
  }

  cout << score[0] << ' ' << score[1];

  return 0;
}
