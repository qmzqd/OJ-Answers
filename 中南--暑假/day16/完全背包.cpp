#include<bits/stdc++.h>
using namespace std;
int V,n,f[10005],v[10005];
int main(){
    cin>>n>>V;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        for(int j=1;j<=V;j++){
            if(j==v[i]) f[j]+=1;
            if(j>=v[i])
            //当前最优解  上一次最优解和剩余空间最优解
                f[j]=f[j]+f[j-v[i]];
        }
    }
    return 0;
}