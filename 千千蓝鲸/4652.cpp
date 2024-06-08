#include<bits/stdc++.h>
using namespace std;
int n,a[200005],f[200005],ans=-0xfffffff;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    f[1]=a[1];
    for(int i=2;i<=n;i++){
        f[i]=max(f[i-1]+a[i],a[i]);
        ans=max(ans,f[i]);
    }cout<<ans;
    return 0;
}
