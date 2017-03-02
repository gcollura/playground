#include <iostream>

using namespace std;

bool is_prime(int v) {
  if (v == 1 || (v > 2 && v % 2 == 0)) return false;
  for (int i = 3; i * i <= v; i += 2)
    if (v % i == 0) return false;
  return true;
}

int main() {
  int n, v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> v;
    if (is_prime(v))
      cout << "Prime" << endl;
    else
      cout << "Not prime" << endl;
  }
}
