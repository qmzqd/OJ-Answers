#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1005], ah = 1, at, b[1005], bh = 1, bt, n;
    cin >> ah >> bh >> n;
    for (int i = 1; i <= ah; i++)
        a[i] = i;
    for (int i = 1; i <= bh; i++)
        b[i] = i;
    for (int i = n; i >= 1; i--)
    {
        cout << a[ah] << " " << b[bh] << endl;
        at++;
    }
    return 0;
}