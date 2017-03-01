#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string time;
    int hh, mm, ss;
    cin >> time;
    bool is_pm = false;
    if (time.substr(time.length() - 2, time.length() - 1) == "PM") is_pm = true;
    sscanf(time.c_str(), "%d:%d:%d", &hh, &mm, &ss);
    if (is_pm && hh < 12) hh += 12;
    if (!is_pm && hh == 12) hh = 0;
    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
