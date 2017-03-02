#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int q;
  cin >> q;
  for (int a0 = 0; a0 < q; a0++) {
    int n;
    cin >> n;
    vector<vector<int>> M(n, vector<int>(n));
    for (int M_i = 0; M_i < n; M_i++) {
      for (int M_j = 0; M_j < n; M_j++) {
        cin >> M[M_i][M_j];
      }
    }
    vector<int> containers(n, 0);
    vector<int> balls(n, 0);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        balls[i] += M[i][j];
        containers[i] += M[j][i];
      }
    }
    sort(balls.begin(), balls.end());
    sort(containers.begin(), containers.end());
    bool valid = true;
    for (int i = 0; i < n && valid; i++)
      if (balls[i] != containers[i]) valid = false;
    if (valid)
      cout << "Possible" << endl;
    else
      cout << "Impossible" << endl;
  }
  return 0;
}
