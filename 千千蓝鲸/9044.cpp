#include <iostream>
#pragma GCC optimize(3)
using namespace std;
int n, m;
int main()
{
    cin >> n >> m;
    int book[n];
    for (int i = 0; i < n; i++)
    {
        cin >> book[i];
    }
    int ms = 0;
    for (int i = 0; i <= n - m; i++)
    {
        int sum = 0;
        for (int j = i; j < i + m; j++)
        {
            sum += book[j];
        }
        ms = max(ms, sum);
    }
    cout << ms << endl;
    return 0;
}