#include <bits/stdc++.h>
using namespace std;
bool sushu(int num) {
    if(num<2) return false;
    for(int i=2;i*i<=num;i++) {
        if(num % i == 0) return false;
    }
    return true;
}
void dfs(vector<int>& nums,int k,int n,int start, int sum,int cnt){
    if (k==0){
        if (sushu(sum)) cnt++;
        return;
    }
    for (int i = start; i < n; i++) {
        dfs(nums,k-1,n,i+1,sum+nums[i],cnt);
    }
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for (int i=0;i<n;i++) {
        cin >> nums[i];
    }
    int cnt = 0;
    dfs(nums, k, n, 0, 0, cnt);
    cout << cnt << endl;
    return 0;
}