#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++) cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < size; i++) cout << v[i] << ' ';
    cout << endl;
    return 0;
}
