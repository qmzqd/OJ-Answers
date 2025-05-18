#include <bits/stdc++.h>
#pragma GCC optimize(3)
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    vector<int> prefix(n + 1, 0);  // 前缀和数组，prefix[0]=0
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        prefix[i + 1] = prefix[i] + nums[i];
    }
    while (m--){
        int l, r;
        cin >> l >> r;
        // 区间和为prefix[r] - prefix[l-1]
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    return 0;
}