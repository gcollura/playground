#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  int t;
  bool is_valid;
  string s;
  char c;
  cin >> t;
  for (int a0 = 0; a0 < t; a0++) {
    cin >> s;
    is_valid = true;
    stack<char> parens; // we need a new empty stack
    for (int i = 0; i < s.length() && is_valid; i++) {
      c = s.at(i);

      switch (c) {
      case '(':
        parens.push(')');
        break;
      case '[':
        parens.push(']');
        break;
      case '{':
        parens.push('}');
        break;
      default:
        if (parens.empty() || parens.top() != c) {
          is_valid = false;
        } else {
          parens.pop();
        }
      }
    }
    if (is_valid && parens.empty())
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
