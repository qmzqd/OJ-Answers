#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int M[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M[i][j];
        }
    }
    int p[n][m];
    p[0][0] = M[0][0];
    for (int j = 1; j < m; j++)
    {
        p[0][j] = p[0][j - 1] + M[0][j];
    }
    for (int i = 1; i < n; i++)
    {
        p[i][0] = p[i - 1][0] + M[i][0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + M[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}