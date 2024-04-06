#include<bits/stdc++.h>
using namespace std;
int n,p[1005][1005],book[1005][1005];
int dfs(int x,int y){
    if(x==n){
        return p[x][y];
    }
    if(book[x][y]) return book[x][y];//搜索记忆优化
    return p[x][y]=max(dfs(x+1,y),dfs(x+1,y+1));
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>p[i][j];
    cout<<dfs()<<endl;
    return 0;
}