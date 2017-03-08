#include <iostream>
#include <algorithm>

using namespace std;

bool finite_jumps(int x1, int v1, int x2, int v2) {
  if (x1 < x2 && v1 <= v2)
    return false;
  cout << x1 << x2 << v1 << v2 << endl;
  if (abs(x2 - x1) % abs(v2 - v1) == 0)
    return true;
  return false;
}

int main() {
  int x1, v1, x2, v2;
  cin >> x1 >> v1 >> x2 >> v2;
  if (finite_jumps(x1, v1, x2, v2))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
