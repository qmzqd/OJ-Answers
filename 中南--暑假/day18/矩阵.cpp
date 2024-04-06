#include<bits/stdc++.h>
using namespace std;
int n,m,p[1005][1005],sum[1005][1005];
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;i<=m;j++){
            cin>>p[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+p[i][j];
            cout<<sum[i][j];
            
        }
    }
    return 0;
}   