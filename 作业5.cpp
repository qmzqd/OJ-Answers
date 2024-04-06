#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<char>> minefield(n, vector<char>(m));
  vector<vector<char>> result(n, vector<char>(m, '0'));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> minefield[i][j];
    }
  }
  int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
  int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (minefield[i][j] == '*') {
        result[i][j] = '*'; 
        continue;
      }
      int count = 0;
      for (int k = 0; k < 8; k++) {
        int nx = i + dx[k];
        int ny = j + dy[k];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && minefield[nx][ny] == '*') {
          count++;
        }
      }
      result[i][j] = count + '0';
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << result[i][j];
    }
    cout << endl;
  }
  return 0;
}