#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_balanced(string expression) {
  stack<int> s;
  for (char c : expression) {
    switch (c) {
    case '(':
      s.push(')');
      break;
    case '[':
      s.push(']');
      break;
    case '{':
      s.push('}');
      break;
    default:
      if (s.empty() || s.top() != c)
        return false;
      else
        s.pop();
    }
  }
  if (s.empty()) return true;
  return false;
}

int main() {
  int t;
  cin >> t;
  for (int a0 = 0; a0 < t; a0++) {
    string expression;
    cin >> expression;
    bool answer = is_balanced(expression);
    if (answer)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
