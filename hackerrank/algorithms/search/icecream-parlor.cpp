#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class IceCream {
public:
  int flavor;
  int index;

  IceCream(int flavor, int index) {
    this->flavor = flavor;
    this->index = index;
  }
};

bool compare(const IceCream &i, const IceCream &j) {
  return (i.flavor < j.flavor);
}

int binarySearch(int first, int last, vector<IceCream> arr, int search) {
  if (first == last) {
    if (arr[first].flavor == search)
      return arr[first].index;
    else
      return -1;
  } else if (first > last)
    return -1;

  int middle = (first + last) / 2;
  if (search == arr[middle].flavor) return arr[middle].index;
  if (search > arr[middle].flavor)
    return binarySearch(middle + 1, last, arr, search);
  else
    return binarySearch(first, middle - 1, arr, search);
}

int main() {
  int t, n, m;
  cin >> t;
  for (int test = 0; test < t; test++) {
    cin >> m >> n;
    vector<IceCream> arr;
    arr.reserve(n);

    for (int i = 0; i < n; i++) {
      int cost;
      cin >> cost;
      arr.push_back(IceCream(cost, i + 1));
    }

    sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < n - 1; i++) {
      int search = m - arr[i].flavor;
      if (search >= arr[i].flavor) {
        int index = binarySearch(i + 1, n - 1, arr, search);
        if (index != -1) {
          cout << min(arr[i].index, index) << " " << max(arr[i].index, index)
               << endl;
          break;
        }
      }
    }
  }
}
