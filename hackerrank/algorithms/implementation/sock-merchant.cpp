#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, v, match = 0;
    cin >> n;
    unordered_map<int, int> count;

    for (int c_i = 0; c_i < n; c_i++) {
        cin >> v;
        count[v]++;
        if (++count[v] == 2) {
            match++;
            count[v] = 0;
        }
    }

    cout << match << endl;
    return 0;
}
