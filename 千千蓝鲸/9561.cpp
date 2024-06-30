#include <iostream>
#include <algorithm>
using namespace std;
string s;
int num = 1, sum, a[105], mid;
bool f(char c)
{
    return '0' <= c && c <= '9';
}
int main()
{
    cin >> s;
    cout << s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (('a' <= s[i] && s[i] <= 'z') && !('a' <= s[i - 1] && s[i - 1] <= 'z'))
        {
            cout << endl
                 << s[i];
            num++;
        }
        else if (f(s[i]) && !f(s[i - 1]))
        {
            cout << ' ' << s[i];
            if (!f(s[i + 1]))
            {
                a[mid++] = s[i] - '0';
            }
        }
        else
        {
            cout << s[i];
            if (f(s[i - 1]) && !f(s[i - 2]) && !f(s[i + 1]))
            {
                a[mid++] = s[i] - '0' + (s[i - 1] - '0') * 10;
            }
            else if (f(s[i - 1]) && f(s[i - 2]) && !f(s[i + 1]))
            {
                a[mid++] = s[i] - '0' + (s[i - 1] - '0') * 10 + (s[i - 2] - '0') * 100;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < num; i++)
        sum += a[i];
    printf("%.2lf", double(sum) / double(num));
    return 0;
}