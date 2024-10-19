#include <bits/stdc++.h>
using namespace std;
#define _for(i, a, b) for (int i = a; i <= b; i++)
long long n, a, b, c;
char s1, s2;
int main()
{
    //freopen("homowork.in", "r", stdin);
    //freopen("homowork.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> s1 >> b >> s2 >> c;
        if (a + b == c)
            cout << "Right!" << endl;
        else
            cout << "Wrong!" << endl;
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
