#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
int n, a[1005] = {0, 1, 2};
int main()
{
    cin >> n;
    _for(i, 3, n)
    {
        if (i % 2)
            a[i] = a[i - 1];
        else
            a[i] = a[i - 1] + a[i / 2];
    }
    cout << a[n];
    return 0;
}
