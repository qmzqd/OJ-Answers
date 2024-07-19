#include <bits/stdc++.h>
#pragma GCC optimize(3)
using namespace std;
int n, a[90000], s[90000], m;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        s[i] = s[i - 1] + a[i];
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        cout << s[x - 1];
        if (m >= 1)
            cout << ",";
    }
}