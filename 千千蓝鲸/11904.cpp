#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
const int N = 1e6 + 10;
int n, a[N], k, cnt;
int main()
{
    cin >> n >> k;
    _for(i, 1, n) scanf("%d", &a[i]);
    int i = 1, j = n;
    while (i <= j)
    {
        if (a[i] + a[j] > k)
            j--;
        else
        {
            i++;
            j--;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
