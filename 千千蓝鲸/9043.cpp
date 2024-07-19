#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> wallAreas(n);
    for (int i = 0; i < n; i++) {
        cin >> wallAreas[i];
    }
    int m;
    cin >> m;
    vector<int> queries(m);
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }
    vector<int> prefixSum(n);
    prefixSum[0] = wallAreas[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + wallAreas[i];
    }

    for (int i = 0; i < m; i++) {
        int queryIndex = queries[i] - 1;

        if (queryIndex == 0) {
            cout << prefixSum[0];
        } else {
            cout << "," << prefixSum[queryIndex];
        }

        if (i == m - 1) {
            cout << endl;
        }
    }

    return 0;
}