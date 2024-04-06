#include<bits/stdc++.h>
using namespace std;
int n,ans,p[125][125],sum[125][125];
int main(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>p[i][j];
            sum[i][j]=p[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int x=i;x<=n;x++){
                for(int y=j;y<=n;y++){
                    //i j结束点 x y结束点
                    int cnt=sum[x][y]-sum[i-1][j]-sum[i][j-1]+sum[i-1][j-1];
                    ans=max(ans,cnt);
                }
            }
        }
    }
    cout<<ans;
    return 0;
}