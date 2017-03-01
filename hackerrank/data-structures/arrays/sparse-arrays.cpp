#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> map;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (map.count(s) > 0)
            map[s]++;
        else
            map[s] = 1;
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << (map.count(s) > 0 ? map[s] : 0) << endl;
    }
    return 0;
}
