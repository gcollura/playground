#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void rotate_left(vector<int> &v, int k) {
    // rotate left is like rotate right
    k = (v.size() - k) % v.size();
    if (k == 0) return;
    int start = 0, next, current, temp, next_temp, swaps = 0;
    for (start = 0; swaps < (int)v.size(); start++) {
        next = (start + k) % v.size();
        current = start;
        temp = v[current];
        while (start != next) {
            next_temp = v[next];
            v[next] = temp;
            current = next;
            next = (next + k) % v.size();
            swaps++;
            temp = next_temp;
        }
        v[next] = temp;
        swaps++;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    rotate_left(v, k);
    for (int i = 0; i < n; i++) cout << v[i] << ' ';
    return 0;
}
