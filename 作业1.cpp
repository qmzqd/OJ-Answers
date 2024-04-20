#include <iostream>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  int s = 0;
  int r = 0;
  for (int i = 1; i <= min(n, m); i++)
  {
    s += (n - i + 1) * (m - i + 1);
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      r += (n - i + 1) * (m - j + 1);
    }
  }

  r -= s;

  cout << s << " " << r << endl;

  return 0;
}