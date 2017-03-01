#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    stack<int> values, maxes;
    int N, action, value;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> action;
        switch (action) {
            case 1:
                cin >> value;
                values.push(value);
                if (maxes.empty() || maxes.top() <= value) maxes.push(value);
                break;
            case 2:
                value = values.top();
                if (!maxes.empty() && maxes.top() == value) maxes.pop();
                if (!values.empty()) values.pop();
                break;
            case 3:
                value = maxes.top();
                cout << value << endl;
                break;
        }
    }
    return 0;
}
