#include <iostream>
#include <vector>

using namespace std;

int mod(int i, int n) {
    while (i < 0) i += n;
    return i % n;
}

vector<int> array_left_rotation(vector<int> &a, int n, int k) {
    int swaps = 0;
    for (int i = 0; swaps < n; i++) {
        int start = mod(i - k, n), temp = a[i];
        while (start != i) {
            swap(temp, a[start]);
            start = mod(start - k, n);
            swaps++;
        }
        a[i] = temp;
        swaps++;
    }
    return a;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++) {
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for (int i = 0; i < n; i++) cout << output[i] << " ";
    cout << endl;
    return 0;
}
