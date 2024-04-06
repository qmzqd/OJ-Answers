#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    if (m == 2)
    {
        int shit = 0;
        string low = to_string(n);
        for (int i = 0; i < low.size(); i++)
        {
            shit += low[i] - '0';
            if (i < low.size() - 1)
            {
                shit *= 2;
            }
        }
        cout << shit << endl;
    }
    else
    {
        int low = 0;
        int shit = n;
        while (shit > 0)
        {
            low = 1;
            if (shit % 2 == 1)
            {
                low |= 1;
            }
            shit /= 2;
        }
        cout << low << endl;
    }
    return 0;
}