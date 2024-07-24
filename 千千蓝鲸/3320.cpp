#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
const int N = 5e3 + 10;
int n, sum, book[N];
struct info
{
    int t, v;
} a[N];

bool cmp(info x, info y)
{
    return x.v > y.v;
}
int main()
{
    cin >> n;
    _for(i, 1, n) cin >> a[i].t >> a[i].v;
    sort(a + 1, a + 1 + n, cmp);
    _for(i, 1, n)
    {
        for (int j = a[i].t; j > 0; j--)
        {
            if (book[j] == 0)
            {
                sum += a[i].v;
                book[j] = 1;
                break;
            }
        }
    }
    cout << sum;
    return 0;
}
