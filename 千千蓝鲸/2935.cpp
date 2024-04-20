#include <iostream>
using namespace std;
int yuanshen[11][11];
int N;
int result = 0;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y)
{
    if (yuanshen[x][y] == 2)
    {
        result++;
        return;
    }
    yuanshen[x][y] = 1;

    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 1 && nx <= N && ny >= 1 && ny <= N && yuanshen[nx][ny] == 0)
        {
            dfs(nx, ny);
        }
    }
    yuanshen[x][y] = 0;
}

int main()
{
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            cin >> yuanshen[i][j];
        }
    }

    if (yuanshen[1][1] != 1)
    {
        dfs(1, 1);
    }

    cout << result << endl;
    return 0;
}