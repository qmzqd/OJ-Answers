#include <bits/stdc++.h>
using namespace std;
int s1, s2;
int main()
{
   s1 = getchar();
   s2 = getchar();
   s1 = toupper(s1);
   s2 = toupper(s2);
   if (s1 == s2)
      cout << "yes";
   else
      cout << "no";
   return 0;
}