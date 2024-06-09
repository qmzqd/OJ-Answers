#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str = to_string(n);
    int len = str.length();
    char r[len];
    for (int i = 0; i < len; i++)
    {
        r[i] = str[len - 1 - i];
    }
    for (int i = 0; i < len; i++)
    {
        cout << r[i];
    }
    cout << endl;
    return 0;
}