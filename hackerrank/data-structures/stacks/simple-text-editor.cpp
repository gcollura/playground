#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, action;
    stack<string> history;
    string current, input;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> action;
        switch (action) {
            case 1:
                cin >> input;
                if (history.empty()) {
                    history.push(input);
                } else {
                    current = history.top();
                    current.append(input);
                    history.push(current);
                }
                break;
            case 2:
                cin >> action;
                input = history.top();
                input.erase(input.end() - action, input.end());
                history.push(input);
                break;
            case 3:
                cin >> action;
                input = history.top();
                cout << input.at(action - 1) << endl;
                break;
            case 4:
                history.pop();
                break;
        }
    }
    return 0;
}
