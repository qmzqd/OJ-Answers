#include <iostream>
using namespace std;
int n, p[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
long long ans;
int find(int x)
{
    if (x == 0)
        return 6;
    int cnt = 0;
    while (x)
    {
        cnt += p[x % 10];
        x /= 10;
    }
    return cnt;
}
int main()
{
    cin >> n;
    for (int i = 0; i < 1111; i++)
        for (int j = 0; j < 1111; j++)
            if (find(i) + find(j) + find(i + j) == n - 4)
                ans++;
    cout << ans;
    return 0;
}