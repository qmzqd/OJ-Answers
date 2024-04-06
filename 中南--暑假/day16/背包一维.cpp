#include<bits/stdc++.h>
using namespace std;
int n,V,f[1005],w[1005],v[1005];
int main(){
    cin>>V>>n;
    for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
    for(int j=V;j>=1;j--)
        if(j>=v[i]){
            f[j]=max(f[j],w[i]+f[j-v[i]]);
        }
//  else f[j]=f[j];
    cout<<f[V];
    return 0;
}