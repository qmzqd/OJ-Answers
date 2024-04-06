#include <bits/stdc++.h>
using namespace std;
void digui(vector<int> &nums, int start, vector<string> &result)
{
    if (start == nums.size())
    {
        string permutation;
        for (int num : nums)
        {
            permutation += to_string(num);
            permutation += " ";
        }
        result.push_back(permutation);
        return;
    }
    for (int i = start; i < nums.size(); ++i)
    {
        swap(nums[i], nums[start]);
        digui(nums, start + 1, result);
        swap(nums[i], nums[start]);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);
    vector<string> result;
    digui(nums, 0, result);
    for (const auto &permutation : result)
    {
        cout << permutation << endl;
    }

    return 0;
}