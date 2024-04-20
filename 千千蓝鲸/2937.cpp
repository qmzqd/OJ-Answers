#include <iostream>
using namespace std;
int dfs_bianliang[10][10];
int N;
bool vis[10][10];
int cnt = 0;

bool wobuzhidao(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N && dfs_bianliang[x][y] != 1;
}

void dfs(int x, int y) {
    if (!wobuzhidao(x, y)) return;
    if (dfs_bianliang[x][y] == 2) {
        cnt++;
        return;
    }
    vis[x][y] = true;
    
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) continue;
            int nx = x + dx;
            int ny = y + dy;
            if (!vis[nx][ny]) {
                dfs(nx, ny);
            }
        }
    } 
    vis[x][y] = false; 
}
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> dfs_bianliang[i][j];
            vis[i][j] = false;
        }
    }
    dfs(0, 0);
    cout << cnt << endl;
    return 0;
}