#include <bits/stdc++.h>
using namespace std;

int n, m, g[25][25], ex, ey, book[25][25];
bool f = false;  
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

void dfs(int x, int y) {
    if (x == ex && y == ey) {
        f = true;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i], yy = y + dy[i];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy] == 0 && book[xx][yy] == 0) {
            book[xx][yy] = 1;
            dfs(xx, yy);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
        }
    }
    cin >> ex >> ey;
    if (g[1][1] == 0) { 
        book[1][1] = 1;
        dfs(1, 1);
    }
    if (f)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}