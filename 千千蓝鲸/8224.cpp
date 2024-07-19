#include <bits/stdc++.h>
#define _for(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
int n, m;
string s[105];
bool cmp(const string x, const string y)
{
    string a = x.substr(6, 8), b = y.substr(6, 8);
    return a < b;
}
int main()
{
    cin >> n >> m;
    _for(i, 1, n) cin >> s[i];
    sort(s + 1, s + 1 + n, cmp);
    cout << s[m];
    return 0;
}
