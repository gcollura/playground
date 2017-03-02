#include <iostream>
#include <vector>

using namespace std;

// NOTE: dumb solution, should we search for the princess in advance?
void display_path_to_princess(int n, vector<string> grid) {
  int p_pos_x, p_pos_y;
  if (grid[0].at(0) == 'p') {
    p_pos_x = p_pos_y = 0;
    for (int i = 0; i < n / 2; i++) cout << "UP" << endl << "LEFT" << endl;
  } else if (grid[0].at(n - 1) == 'p') {
    p_pos_x = 0;
    p_pos_y = n - 1;
    for (int i = 0; i < n / 2; i++) cout << "UP" << endl << "RIGHT" << endl;
  } else if (grid[n - 1].at(0) == 'p') {
    p_pos_x = n - 1;
    p_pos_y = 0;
    for (int i = 0; i < n / 2; i++) cout << "DOWN" << endl << "LEFT" << endl;
  } else {
    p_pos_x = n - 1;
    p_pos_y = n - 1;
    for (int i = 0; i < n / 2; i++) cout << "DOWN" << endl << "RIGHT" << endl;
  }
}

int main(void) {
  int m;
  vector<string> grid;

  cin >> m;

  for (int i = 0; i < m; i++) {
    string s;
    cin >> s;
    grid.push_back(s);
  }

  display_path_to_princess(m, grid);

  return 0;
}
