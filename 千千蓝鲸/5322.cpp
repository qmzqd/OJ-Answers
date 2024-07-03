#include <bits/stdc++.h>
using namespace std;
string s;
int a[10], p;
int main()
{
    cin >> s;
    int cnt = 1, sum = 0, k = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        int b = s[i] - '0';
        if (b)
            sum += k;
        if (cnt & 8 == 0)
        {
            a[++p] = sum;
            sum = 0;
            k = 1;
        }
        else
            k *= 2;
        cnt++;
    }
    for (int i = p; i > 1; i--)
        cout << a[i] << ".";
    cout << a[1];
    return 0;
}
