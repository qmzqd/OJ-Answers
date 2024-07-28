#include <iostream>
using namespace std;
int n, m, cnt;
int main()
{
    cin >> n >> m;
    int clr[n + 1] = {0};
    for (int i = 0; i < m; i++)
    {
        int l, r, k;
        cin >> l >> r >> k;
        if (k == 1)
        {
            for (int j = l; j <= r; j++)
            {
                clr[j] = 2;
            }
        }
        else if (k == 2)
        {
            for (int j = l; j <= r; j++)
            {
                clr[j] = 3;
            }
        }
        else if (k == 3)
        {
            for (int j = l; j <= r; j++)
            {
                clr[j] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (clr[i] == 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}