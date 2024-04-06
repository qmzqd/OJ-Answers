#include<bits/stdc++.h>
using namespace std;
int n,p[30][30],book[30],maxn;//20
void dfs(int sum,int step){
    if(step>n){//工作分配完毕
        maxn=max(maxn,sum);
        return;
    }
    for(int j;j<=n;j++){//遍历所有的工作
        if(!book[j]){
            book[j]=1;//标记状态
            dfs(sum+p[step][j],step+1);//继续递归
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>p[i][j];
    
    dfs(0,1);
    cout<<maxn;
    return 0;
}