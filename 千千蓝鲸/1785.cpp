#include <bits/stdc++.h>
using namespace std;

#define _for(i, a, b) for (int i = a; i <= b; i++)
const int N = 1e4 + 10;

int n, k, a[N], ans;
int x;

bool check(int x)
{
    int sum = 0;
    _for(i, 1, n)
        sum += a[i] / x;
    return sum >= k;
}

int main()
{
    cin >> n >> k;
    _for(i, 1, n)
    {
        cin >> x;
        a[i] = x * 100;
    }
    int l = 1, r = 1e7;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    printf("%.2f", ans / 100.0);
    return 0;
}