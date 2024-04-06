#include <bits/stdc++.h>
using namespace std;
int main() {
    int L, N, M;
    cin >> L >> N >> M;
    int s = 0;
    int m = 0;
    for (int i = 0; i < N; i++) {
        int c;
        cin >> c;
        m = max(m, c - s);
        s = c;
    }
    int j;
    if (M >= N) {
        j = L;
    } else {
        if (M == 0) {
            j = m;
        } else {
            j = max(m, (L - s) + (L - 0));
            j = max(j, m / (N - M + 2));
        }
    }
    cout << j << endl;
    return 0;
}