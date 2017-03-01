#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    vector<int> c(N, 0);
    for (int i = 0; i < N; i++) cin >> v[i];

    for (int i = 0; i < N; i++) {
        c[i] = 1;
        if (i > 0 && v[i - 1] > v[i] && c[i - 1] <= c[i]) c[i - 1] = c[i] + 1;
        if (i > 0 && v[i] > v[i - 1]) c[i] = c[i - 1] + 1;
    }

    for (int i = N - 1; i > 0; i--) {
        if (v[i - 1] > v[i] && c[i - 1] <= c[i]) c[i - 1] = c[i] + 1;
    }

    long long total = 0;
    for (int i = 0; i < N; i++) {
        total += c[i];
    }
    cout << total << endl;
    return 0;
}
