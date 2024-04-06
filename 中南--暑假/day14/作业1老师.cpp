#include<bits/stdc++.h>
using namespace std;
int p[15][15];
int n,m,t;
int sx,sy,fx,fy;
int book[15][15];
int ans=0;
int pos[4][2]={0,1,1,0,0,-1,-1,0};
void dfs(int x,int y){
    if (x==fx&&y==fy){
        ans++;
        return;
    }
    for(int i=0;i<4;i++){//向四个方向进行探索
        int tx=x+pos[i][0],ty=y+pos[i][1];//下一步位置
        //未越界且未走过且可以走
        if(1<=tx&&tx<=n&&1<=ty&&ty<=m&&!book[tx][ty]&&!p[tx][ty]){
            book[tx][ty]=1;//标记
            dfs(tx,ty);//
            book[tx][ty]=0;//回溯
        }
    }
    // 上
    if (x>1&&book[x-1][y]==0){
        book[x-1][y]=1;
        dfs(x-1,y);
        book[x-1][y]=0;x
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