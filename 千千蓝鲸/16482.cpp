#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int u[N], v[N];
    for (int i = 0; i < N; i++)
        cin >> u[i];
    for (int i = 0; i < N; i++)
        cin >> v[i];

    sort(u, u + N);
    sort(v, v + N);

    int win = 0;
    for (int i = 0; i < N; i++)
        if (u[i] > v[i])
            win++;

    cout << win << endl;

    return 0;
}