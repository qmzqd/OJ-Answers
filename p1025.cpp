#include <iostream>
using namespace std;
int n, k, ans = 0;
void s(int c, int t, int l)
{
   if (c == k)
   {
      if (n - l >= t)
      {
         ans++;
      }
      return;
   }
   l += t;
   int p = l;
   for (int i = t; i <= n - p; i++)
   {
      s(c + 1, t - 1 + i, l);
      l += 1;
   }
   l = p - t;
   return;
}
int main()
{
   cin >> n >> k;
   s(1, 1, 0);
   cout << ans;
   return 0;
}
