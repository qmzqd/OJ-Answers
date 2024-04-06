#include<bits/stdc++.h>
using namespace std;
int n,k,p[25],ans;
bool prime(int x){
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++){//2->根号x
        if(x%i==0) return 0;
    }
    return 1;
}
void dfs(int x,int sum,int step){
    if(step==k){//找到了k个
        if(prime(sum)) ans++;
        return;
    }   
    for(int i=x;i<n;i++){//遍历a   x~n-1;
        dfs(i+1,sum+p[i],step+1);
    }
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>p[i];
    dfs(0,0,1);//当前位置
    cout<<ans;
    return 0;
}