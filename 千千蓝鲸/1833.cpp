#include <iostream>
using namespace std;
const int N = 1e5 + 7;
int w[N];
int f[N][2];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    f[0][0] = 0;
    f[0][1] = -1e9; 
    for (int i = 1; i <= n; i++)
    {
        f[i][0] = max(f[i - 1][0], f[i - 1][1] + w[i]);
        f[i][1] = max(f[i - 1][1], f[i - 1][0] - w[i]);
    }
    cout << f[n][0] << endl;
}
