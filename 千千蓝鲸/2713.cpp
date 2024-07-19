#include <bits/stdc++.h>
using namespace std;
int q[10], a, b, c;
int main()
{
    for (int i = 0; i < 7; i++)
        cin >> q[i];
    sort(q, q + 7);
    a = q[0], b = q[1], c = q[6] - a - b;
    cout << a << " " << b << " " << c;
    return 0;
}
