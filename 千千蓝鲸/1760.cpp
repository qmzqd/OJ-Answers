#include <bits/stdc++.h>
using namespace std;
int a, x;
int main() {
    while (true) {
        cin >> a >> x;
        if (cin.eof()) {
            break;
        }
        if (x == 2*a+1 || x == 3*a+1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}