#include <iostream>
#include <queue>
using namespace std;
const int MAX = 15;
int n;
char grid[MAX][MAX];
bool bfs(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == '.');
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    queue<pair<int, int>> q;
    q.push({0, 0});
    grid[0][0] = '#';
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x == n - 1 && y == n - 1)
        {
            cout << "YES";
            return 0;
        }
        if (bfs(x - 1, y))
        {
            q.push({x - 1, y});
            grid[x - 1][y] = '#';
        }
        if (bfs(x, y - 1))
        {
            q.push({x, y - 1});
            grid[x][y - 1] = '#';
        }
        if (bfs(x + 1, y))
        {
            q.push({x + 1, y});
            grid[x + 1][y] = '#';
        }
        if (bfs(x, y + 1))
        {
            q.push({x, y + 1});
            grid[x][y + 1] = '#';
        }
    }
    cout << "NO";
    return 0;
}