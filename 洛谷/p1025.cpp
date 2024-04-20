#include <bits/stdc++.h>
using namespace std;
int n, k, ans;
void dfs(int cnt, int rest, int s)
{
   if (cnt == k)
   {
      if (rest == 0)
      {
         ans++;
      }
      return;
   }
   for (int i=s;i*(k-cnt)<=rest;i++)
   {
      dfs(cnt+1,rest-i,i);
   }

}
int main()
{
   cin>>n>>k;
   dfs(0,n,1);
   cout<<ans<<endl;
   return 0;
}
