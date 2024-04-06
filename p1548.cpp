#include <bits/stdc++.h>
using namespace std;
string s[1000], a, b;
int n, m, d, c;
int main()
{

    cin >> n >> m;
    c = ((m + 1) * (n + 1) * m * n) / 4;
    for (int i = 0; m >= 1 && n >= 1; m--, n--)
        d += m * n;
    cout << d << " " << c - d;
    return 0;
}
