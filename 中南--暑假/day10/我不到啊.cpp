#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int n,p[5005];
long long ans;
int find(int x,int k){//组合情况
    return x*(x-1)/2;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        p[x]++;//x长度木棍+1
    }
    for(int i=2;i<=5000;i++){
        if(p[i]>=2){
            long long sum=0,num=find(p[i],2);//i长度 木棍组合
            for(int j=1;j<=i/2;j++){
                if(j==i-j){//j==i=j
                if(p[j]>=2){//至少2根
                    sum=num*=find(p[j],2)%MOD;
                }
            }else{
                if(p[j]>=1&&p[i-j]>=1){
                    sum=num*p[j]*p[i-j]%MOD;
                }
                sum%=MOD;
            }
            ans+=sum;
        }
    }
}
    cout<<ans%MOD;
    return 0;
}
