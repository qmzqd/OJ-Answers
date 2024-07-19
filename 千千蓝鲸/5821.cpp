#include <bits/stdc++.h>
#pragma GCC optimize(3)
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l - 1; i < r; i++)
        {
            sum += nums[i];
        }
        cout << sum << endl;
    }
    return 0;
}