#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p;
    cin >> n >> p;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    for (int i = 0; i < p; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        for (int j = x - 1; j < y; j++) {
            scores[j] += z;
        }
    }
    int ms = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] < ms) {
            ms = scores[i];
        }
    }
    cout << ms;
    return 0;
}