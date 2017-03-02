#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

template <typename T>
struct track {
  T row, start, end;
  track() {}
  track(T row, T start, T end) : row(row), start(start), end(end) {}

  bool operator<(const track<long long> &b) {
    if (this->row == b.row)
      return this->start < b.start;
    else
      return this->row < b.row;
  }
};

template <typename T>
stack<track<T>> merge_tracks(vector<track<T>> &tracks) {
  stack<track<T>> s;
  for (int i = 0; i < (int) tracks.size(); i++) {
    if (s.empty() || s.top().row != tracks[i].row)
      s.push(tracks[i]);
    else {
      auto &t = s.top();
      if (t.end >= tracks[i].start)
        t.end = max(tracks[i].end, t.end);
      else
        s.push(tracks[i]);
    }
  }
  return s;
}

int main() {
  long long n, m, k;
  cin >> n >> m >> k;
  vector<track<long long>> tracks(k);

  for (int i = 0; i < k; i++) {
    unsigned int r, c1, c2;
    cin >> r >> c1 >> c2;
    tracks[i] = track<long long>(r, c1, c2);
  }

  sort(tracks.begin(), tracks.end());

  auto final_tracks = merge_tracks(tracks);
  long long cells = 0;
  long long grid_size = n * m;
  while (!final_tracks.empty()) {
    auto track = final_tracks.top();
    cells += track.end - track.start + 1;
    final_tracks.pop();
  }

  cout << grid_size - cells << endl;
  return 0;
}
