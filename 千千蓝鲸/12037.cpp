#include <iostream>
using namespace std;
int i, j, k, flag, ma, mi, n, m;
int main()
{
    cin >> n >> m;
    int a[n + 1][m + 1];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        ma = a[i][1];
        for (j = 2; j <= m; j++)
        {
            if (a[i][j] > ma)
            {
                ma = a[i][j];
            }
        }
        for (j = 1; j <= m; j++)
        {
            flag = 1;
            mi = a[1][j];
            for (k = 2; k <= n; k++)
            {
                if (a[k][j] < mi)
                {
                    mi = a[k][j];
                }
            }
            if (a[i][j] == mi && a[i][j] == ma)
            {
                cout << i << " " << j << " " << a[i][j] << endl;
                return 0;
            }
        }
    }
    cout << "none";
    return 0;
}