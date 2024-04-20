#include <bits/stdc++.h>
using namespace std;

string s;
queue<char> q;
int main()
{
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        q.push(s[i]);
    }
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
        q.push(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return 0;
}