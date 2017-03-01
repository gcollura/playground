#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

struct rect {
    int height;
    int pos;
    rect(int h, int p) : height(h), pos(p){};
    rect(){};
};

int main() {
    int N, v;
    long m = 0;
    deque<rect> s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> v;
        if (m < v)  // v * 1
            m = v;

        if (s.empty())
            s.emplace_front(v, i);
        else {
            rect r;

            if (s.front().height > v) {
                while (s.front().height > v) {
                    r = s.front();
                    s.pop_front();
                }
                s.emplace_front(v, r.pos);
            } else {
                s.emplace_front(v, i);
            }

            for (rect &r : s) {
                long area = r.height * (i - r.pos + 1);
                if (area > m) m = area;
            }
        }
    }

    cout << m << endl;
    return 0;
}
