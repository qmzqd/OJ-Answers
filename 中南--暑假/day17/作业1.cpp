#include <iostream>
using namespace std;

const int M = 1005;

int main() {
    int n, m;
    cin >> n >> m;

    int p[M];
    for (int i = 0; i < M; i++) {
        p[i] = -1;
    }

    int N[M];
    for (int i = 0; i < n; i++) {
        cin >> N[i];
        if (p[N[i]] == -1) {
            p[N[i]] = i + 1;
        }
    }

    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        cout << p[q] << " ";
    }

    return 0;
}