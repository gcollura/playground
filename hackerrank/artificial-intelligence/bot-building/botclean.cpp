/*
 * Same solution for botclean-stochastic
 */
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

struct coord {
  int x, y;
  coord() : x(0), y(0) {}
  coord(int x, int y) : x(x), y(y) {}
  int distance(const coord &other) {
    return abs(this->x - other.x) + abs(this->y - other.y);
  }
};

void next_move(int posr, int posc, vector<string> board) {
  vector<coord> dirty_cells;
  coord bot(posr, posc), next;
  int min_dist = INT_MAX, dist, n = board.size();

  if (board[bot.x][bot.y] == 'd') {
    cout << "CLEAN" << endl;
    return;
  }

  // grid size seems fixed to 5x5, enumerate all the possible dirty cells
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (board[i][j] == 'd') dirty_cells.emplace_back(i, j);

  for (coord &c : dirty_cells) {
    dist = bot.distance(c);
    if (dist < min_dist) {
      next = c;
      min_dist = dist;
    }
  }

  if (bot.x < next.x)
    cout << "DOWN" << endl;
  else if (bot.x > next.x)
    cout << "UP" << endl;
  else if (bot.y > next.y)
    cout << "LEFT" << endl;
  else if (bot.y < next.y)
    cout << "RIGHT" << endl;
}

int main(void) {
  int pos[2];
  vector<string> board;
  cin >> pos[0] >> pos[1];
  for (int i = 0; i < 5; i++) {
    string s;
    cin >> s;
    board.push_back(s);
  }
  next_move(pos[0], pos[1], board);
  return 0;
}
