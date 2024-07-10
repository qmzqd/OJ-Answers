#include <bits/stdc++.h>
using namespace std;
string flag(string binary)
{
    string octal;
    int i = 0;
    while (i < binary.length())
    {
        int n = binary[i] - '0';
        int count = 0;
        while (i < binary.length() && n != 0)
        {
            if (binary[i] == '0')
            {
                count++;
            }
            else
            {
                count = 0;
            }
            i++;
        }
        octal += to_string(count);
    }
    reverse(octal.begin(), octal.end());
    return octal;
}

int main()
{
    string binary;
    cin >> binary;
    string octal = flag(binary);
    cout << octal << endl;
    return 0;
}