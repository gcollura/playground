#include <iostream>

using namespace std;

/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    unsigned int result = 0;

    for (unsigned int i = l; i <= (unsigned int) r; i++) {
        for (unsigned int j = i; j <= (unsigned int) r; j++) {
            if ((i ^ j) > result) result = (i ^ j);
        }
    }
    return result;
}

int main() {
    int res;
    int _l, _r;
    cin >> _l >> _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res;

    return 0;
}
