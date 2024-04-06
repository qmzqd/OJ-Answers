#include<bits/stdc++.h>
using namespace std;
int p[15][15];
int n,m,t;
int sx,sy,fx,fy;
int book[15][15];
int ans=0;
void dfs(int x,int y){
    if (x==fx&&y==fy){
        ans++;
        return;
    }
    // 上
    if (x>1&&book[x-1][y]==0){
        book[x-1][y]=1;
        dfs(x-1,y);
        book[x-1][y]=0;
    }
    // 下
    if (x<n&&book[x+1][y]==0){
        book[x+1][y]=1;
        dfs(x+1,y);
        book[x+1][y]=0;
    }
    // 左
    if (y>1&&book[x][y-1]==0){
        book[x][y-1]=1;
        dfs(x, y-1);
        book[x][y-1]=0;
    }
    // 右
    if (y<m&&book[x][y+1]==0) {
        book[x][y+1]=1;
        dfs(x,y+1);
        book[x][y+1]=0; 
    }
}
int main(){
    cin>>n>>m>>t;
    cin>>sx>>sy>>fx>>fy;
    for (int i=0;i<t;i++) {
        int x,y;
        cin>>x>>y;
        book[x][y]=1;
    }
    book[sx][sy]=1;
    dfs(sx,sy);
    cout<<ans<<endl;
    return 0;
}