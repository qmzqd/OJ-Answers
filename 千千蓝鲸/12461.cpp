#include <bits/stdc++.h>
using namespace std;
int t[1145];
int ms(const vector<int>&a) {
    int m = INT_MIN, flag = 0;
    for (int i = 0; i < a.size(); i++) {
        flag = flag + a[i];
        if (m < flag)
            m = flag;

        if (flag < 0)
            flag = 0;
    }
    return m;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    int maxSum = ms(t);
    cout << maxSum << endl;
    return 0;
}