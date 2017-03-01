#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    float pos = 0.f, neg = 0.f, zer = 0.f;
    cin >> n;
    vector<int> arr(n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
        cin >> arr[arr_i];
        if (arr[arr_i] > 0) pos += 1.f;
        if (arr[arr_i] < 0) neg += 1.f;
        if (arr[arr_i] == 0) zer += 1.f;
    }
    cout << pos / n << endl;
    cout << neg / n << endl;
    cout << zer / n << endl;
    return 0;
}
