#include <bits/stdc++.h>
using namespace std;
bool cc(const string &a, const string &b)
{
   return (a + b) > (b + a);
}
int main()
{
   int n;
   cin >> n;
   vector<string> nums(n);
   for (int i = 0; i < n; ++i)
   {
      cin >> nums[i];
   }
   sort(nums.begin(), nums.end(), cc);
   string jieguo;
   for (int i = 0; i < n; ++i)
   {
      jieguo += nums[i];
   }
   if (jieguo[0] == '0')
   {
      jieguo = "0";
   }
   cout << jieguo << endl;
   return 0;
}
