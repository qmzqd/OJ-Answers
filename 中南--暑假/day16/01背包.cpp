#include<bits/stdc++.h>
using namespace std;
int n,V,f[1005][1005],w[1005],v[1005];
int main(){
    cin>>V>>n;
    for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
    for(int i=0;i<=V;i++){
        for(int j=0;j<=V;j++){
                if(j>=w[i]){
                f[i][j]=max(f[i-1][j],V[i]+f[i-1][j-w[i]]);
                }else f[i][j]=f[i-1][j];
        }
    }
    cout<<f[n][V];
    return 0;
}