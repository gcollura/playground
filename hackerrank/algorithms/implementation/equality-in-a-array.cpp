#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> map;
    int N, n;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> n;
        map[n] = map.count(n) > 0 ? map[n] + 1 : 1;
    }
    int max = 0;
    for (auto &p : map)
        if (p.second > max) max = p.second;

    cout << N - max << endl;
    return 0;
}
