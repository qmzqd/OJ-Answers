#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main() {
    int m,n;
    cin>>m>>n;
    int t[105],v[105];
    for (int i=0;i<n;i++){
        cin>>t[i]>>v[i];
    }
    for (int i=1;i<=n;i++) {
        for (int j=0; j<m;j++) {
            if (j>=t[i]){
                dp[i][j]=max(dp[i-1][j-t[i]]+v[i],dp[i-1][j]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}