#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int n,k,p[N];
long long ans;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>p[i];
    if(p[0]>k){//起始点 大于k 特殊情况
        ans+=p[0]-k;
        p[0]=k;
    }
    for(int i=1;i<n;i++){
        if(p[i]+p[i-1]>k){
            int x=p[i]+p[i-1]-k;
            p[i]-=x;
            ans+=x;
        }
    }
    cout<<ans;
    return 0;
}
