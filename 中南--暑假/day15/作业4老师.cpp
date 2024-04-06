#include<bits/stdc++.h>
using namespace std;
int n,m,ans,p[105][105],book[105][105];
int pos[4][2]={0,1,1,0,0,-1,-1,0};
int dfs(int x,int y){
    for(int i=0;i<4;i++){
        int tx=x+pos[i][0],ty=y+pos[i][1];
        if(1<=tx&&tx<=n&& 1<+ty&&ty<=m&&p[tx][ty]<p[x][y]){
            book[x][y]=max(book[x][y],dfs(tx,ty)+1);
        }
    }
    return book[x][y];
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;i<=m;j++){
            cin>>p[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ans=max(ans,dfs(i,j));
        }
    }
    cout<<ans;
    return 0;
}