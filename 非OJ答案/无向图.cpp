#include <bits/stdc++.h>
using namespace std;
int n, m, a[105][105], f[105][105];
int main()
{
   cin >> n >> m;
   memset(f, 0, sizeof(f));
   while (m--)
   {
      int x, y;
      cin >> x >> y;
      f[x][y] = f[y][x] = 1;
   }

   for (int i = 1; i < n; i++)
   {
      for (int j = 1; j < n; j++)
      {
         cout << f[i][j] << " ";
      }
   }
   return 0;
}
