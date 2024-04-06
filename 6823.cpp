#include <bits/stdc++.h>
using namespace std;
int mp[100][100];
int vis[100][100];
int n,m,cnt;
char dx[4] = {1,0,-1,0},dy[4]={0,1,0,-1};
void dfs(int x,int y)
{
    for(int i=0;i<4;i++) {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>0 && nx<=n&&ny>0&&ny<=m&&mp[nx][ny]==1&&vis[nx][ny]=="."){
            vis[nx][ny]=1;
            dfs(nx,ny);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin>>mp[i][j];
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(mp[i][j]==1&&vis[i][j]==0) {
                cnt++;
                dfs(i,j);
            }
        }
    }
    cout<<cnt<<endl;
}