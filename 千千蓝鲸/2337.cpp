#include <iostream>
using namespace std;
int n, m, a[105][3];
int main()
{
    cin >> n >> m;
    int mid = 1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int i = 0; i < x; i++)
        {
            a[mid][0] = y;
            mid++;
        }
    }
    mid = 1;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int i = 0; i < x; i++)
        {
            a[mid][1] = y;
            mid++;
        }
    }
    for (int i = 1; i <= 100; i++)
        a[i][2] = a[i][1] - a[i][0];
    int maxn = 0;
    for (int i = 1; i <= 100; i++)
        maxn = max(maxn, a[i][2]);
    cout << maxn;
    return 0;
}