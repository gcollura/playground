#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int height(deque<int> &h) {
    int height = 0;
    for (auto &i : h) height += i;
    return height;
}

int main() {
    int n;
    vector<deque<int>> h(3, deque<int>(0));
    vector<int> heights(3, 0);
    for (int i = 0; i < 3; i++) {
        cin >> n;
        h[i].resize(n);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < h[i].size(); j++) {
            cin >> h[i][j];
            heights[i] += h[i][j];
        }
    }

    while (heights[0] != heights[1] || heights[1] != heights[2] ||
           heights[0] != heights[2]) {
        int max_height = 0, hh, ii;
        for (int i = 0; i < 3; i++) {
            hh = heights[i];
            if (hh > max_height) {
                ii = i;
                max_height = hh;
            }
        }
        heights[ii] -= h[ii].front();
        h[ii].pop_front();
    }

    cout << heights[0] << endl;

    return 0;
}
