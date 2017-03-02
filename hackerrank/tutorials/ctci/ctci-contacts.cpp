#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

struct leaf {
  unordered_map<char, leaf *> children;
  int count = 0;

  void add(string word, uint32_t offset) {
    if (offset < word.length()) {
      if (children[word[offset]] == NULL) children[word[offset]] = new leaf;
      children[word[offset]]->add(word, offset + 1);
    } else {
      children['\0'] = nullptr;
    }
    count++;
  }

  int find(string word, uint32_t offset) {
    if (offset < word.length()) {
      if (children[word[offset]] != NULL)
        return children[word[offset]]->find(word, offset + 1);
      return 0;
    }

    return count;
  }
};

struct trie {
  unordered_map<char, leaf> db;
  void add(string word) { db[word[0]].add(word, 1); }
  int find(string word) { return db[word[0]].find(word, 1); }
};

int main() {
  int n;
  trie contacts;
  cin >> n;
  for (int a0 = 0; a0 < n; a0++) {
    string op, contact;
    cin >> op >> contact;
    if (op == "add")
      contacts.add(contact);
    else if (op == "find")
      cout << contacts.find(contact) << endl;
  }
  return 0;
}
