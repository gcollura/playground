#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    unordered_map<string, int> words;
    for (string &word : magazine) words[word]++;
    for (string &word : ransom)
        if (words[word] > 0)
            words[word]--;
        else
            return false;
    return true;
}

int main() {
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for (int magazine_i = 0; magazine_i < m; magazine_i++) {
        cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for (int ransom_i = 0; ransom_i < n; ransom_i++) {
        cin >> ransom[ransom_i];
    }
    if (ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
