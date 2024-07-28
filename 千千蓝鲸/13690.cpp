/*描述

奇回文串最中间的字符称为回文中心，最左侧的字符称为回文边缘。回文边缘的ASCII码减去回文中心ASCII的数称为该回文串的顺差。

给定小写英文字符串S与整数k，求顺差不低于k的最长回文串长度。若不存在顺差不低于k的回文串，输出－1。

输入描述

输入共两行。
输入的第一行为一个字符串S
输入的第二行为一个非负整数k。

输出描述

输出一行一个整数，表示顺差不低于k的最长回文串长度。

样例输入 1

ebcbeae
3
样例输出 1

3*/
#include <bits/stdc++.h>
using namespace std;
int flag(string s, int left, int right)
{
    int l = left, r = right;
    while (l >= 0 && r < s.length() && s[l] == s[r])
    {
        l--;
        r++;
    }
    return r - l - 1;
}
int main()
{
    string s;
    int k;
    cin >> s >> k;
    int maxl = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int len1 = flag(s, i, i);
        int len2 = flag(s, i, i + 1);
        int len = max(len1, len2);
        if (len >= k && len > maxl)
            maxl = len;
    }
    if (maxl == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << maxl << endl;
    }
    return 0;
}