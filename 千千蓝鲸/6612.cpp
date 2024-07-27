#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s[1001];
        scanf("%s", s);
        int len = strlen(s);
        int l = 0, r = len - 1;
        int ans = 0;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                ans++;
                l++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}