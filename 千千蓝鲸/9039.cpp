#include <iostream>
#pragma GCC optimize(3)
using namespace std;
int book[1005][1005];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> book[i][j];
        }
    }
    int ms = 0;
    bool p = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (book[i][j] == 0)
            {
                int score = 0;
                for (int k = 0; k < n; k++)
                {
                    score += book[i][k];
                }
                for (int k = 0; k < n; k++)
                {
                    score += book[k][j];
                }
                score -= book[i][j];
                ms = max(ms, score);
                p = true;
            }
        }
    }
    if (p)
    {
        cout << ms << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;
}