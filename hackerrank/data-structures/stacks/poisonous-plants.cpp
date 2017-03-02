#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  int N;
  stack<pair<int, int>> s;
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
  }

  int max_days = 0, d;
  for (int i = 0; i < N; i++) {
    d = 0;
    if (s.empty()) {
      s.push(make_pair(v[i], 0));
      continue;
    }
    while (!s.empty() && s.top().first >= v[i]) {
      d = max(s.top().second, d);
      s.pop();
    }
    if (s.empty())
      s.push(make_pair(v[i], (d = 0)));
    else
      s.push(make_pair(v[i], ++d));

    if (max_days < d) max_days = d;
  }

  cout << max_days << endl;

  return 0;
}
