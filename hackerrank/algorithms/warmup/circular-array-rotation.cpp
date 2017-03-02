#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> a(n);
  for (int a_i = 0; a_i < n; a_i++) {
    cin >> a[a_i];
  }

  k %= n;
  for (int i = 0, j = 0; j < n; i++) {
    int start = (i + k) % n, temp = a[i];
    while (start != i) {
      swap(temp, a[start]);
      j++;
      start = (start + k) % n;
    }
    a[i] = temp;
    j++;
  }
  for (int a0 = 0; a0 < q; a0++) {
    int m;
    cin >> m;
    cout << a[m] << endl;
  }
  return 0;
}
