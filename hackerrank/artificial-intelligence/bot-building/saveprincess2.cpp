#include <iostream>
#include <string>
#include <vector>

using namespace std;

void next_move(int n, int r, int c, vector<string> grid) {
  int p_pos_x = 0, p_pos_y = 0;

  for (int i = 0; i < n; i++) {
    size_t y = grid[i].find('p');
    if (y != string::npos) {
      p_pos_x = i;
      p_pos_y = y;
      break;
    }
  }

  if (r < p_pos_x)
    cout << "DOWN" << endl;
  else if (r > p_pos_x)
    cout << "UP" << endl;
  else if (c > p_pos_y)
    cout << "LEFT" << endl;
  else if (c < p_pos_y)
    cout << "RIGHT" << endl;
}

int main(void) {
  int n, r, c;
  vector<string> grid;

  cin >> n;
  cin >> r;
  cin >> c;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    grid.push_back(s);
  }

  next_move(n, r, c, grid);
  return 0;
}
