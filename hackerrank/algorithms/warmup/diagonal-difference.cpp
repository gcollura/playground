#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, result = 0;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n));
    for (int a_i = 0; a_i < n; a_i++) {
        for (int a_j = 0; a_j < n; a_j++) {
            cin >> a[a_i][a_j];
        }
    }
    for (int i = 0; i < n; i++) {
        result += a[i][i];
    }
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        result -= a[i][j];
    }
    cout << abs(result);
    return 0;
}
