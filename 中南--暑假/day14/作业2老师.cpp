#include<bits/stdc++.h>
using namespace std;
int n,p[10];
void dfs(int x,int k){//需要拆分值k已拆分数量
    if(x==0){
        for(int i=0;i<k-1;i++) cout<<p[i]<<"+";
        cout<<p[k-1]<<endl;//处理最后一项
        return;
    }
    for(int i=1;i<=x;i++){//遍历剩余数拆分的可能性
        if(p[k-1]<=i)   {//满足单调不递减
            p[k]=i;     //存入值
            dfs(x-i,k+1);
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n/2;i++){
        p[0]=i;
        dfs(n-i,1);
    }
    return 0;
}
