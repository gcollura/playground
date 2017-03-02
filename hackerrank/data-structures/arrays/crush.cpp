#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M, a, b, k;
  cin >> N >> M;
  vector<long> v(N, 0);

  for (int i = 0; i < M; i++) {
    cin >> a >> b >> k;
    v[a - 1] += k;
    v[b] -= k;
  }

  long max = 0, sum = 0;
  for (auto &i : v) {
    sum += i;
    i = sum;
    if (i > max) max = i;
  }

  cout << max;
  return 0;
}
