#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
string a, b;
long long f[10005][10005];
int main()
{
    cin >> a >> b;
    int lena = a.length(), lenb = b.length();
    _for(i, 1, lenb) f[0][i] = i;
    _for(i, 1, lena) f[i][0] = i;
    _for(i, 1, lena) _for(j, 1, lenb)
    {
        if (a[i - 1] == b[j - 1])
            f[i][j] = f[i - 1][j - 1];
        else
            f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + 1;
    }
    cout << f[lena][lenb] << endl;
    return 0;
}
