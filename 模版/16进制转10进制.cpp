#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long p = 0;
    string s;
    cin >> s;
    for (unsigned i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case '0':
            p += 0 * pow(16, s.length() - i - 1);
            break;
        case '1':
            p += 1 * pow(16, s.length() - i - 1);
            break;
        case '2':
            p += 2 * pow(16, s.length() - i - 1);
            break;
        case '3':
            p += 3 * pow(16, s.length() - i - 1);
            break;
        case '4':
            p += 4 * pow(16, s.length() - i - 1);
            break;
        case '5':
            p += 5 * pow(16, s.length() - i - 1);
            break;
        case '6':
            p += 6 * pow(16, s.length() - i - 1);
            break;
        case '7':
            p += 7 * pow(16, s.length() - i - 1);
            break;
        case '8':
            p += 8 * pow(16, s.length() - i - 1);
            break;
        case '9':
            p += 9 * pow(16, s.length() - i - 1);
            break;
        case 'A':
            p += 10 * pow(16, s.length() - i - 1);
            break;
        case 'B':
            p += 11 * pow(16, s.length() - i - 1);
            break;
        case 'C':
            p += 12 * pow(16, s.length() - i - 1);
            break;
        case 'D':
            p += 13 * pow(16, s.length() - i - 1);
            break;
        case 'E':
            p += 14 * pow(16, s.length() - i - 1);
            break;
        case 'F':
            p += 15 * pow(16, s.length() - i - 1);
            break;
        default:
            break;
        }
    }
    cout << p;
    return 0;
}