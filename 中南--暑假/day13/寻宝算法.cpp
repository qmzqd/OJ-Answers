#include<bits/stdc++.h>
using namespace std;
int n,book[15][15],p[15][15],ans,flag,sx,sy,ex,ey;
int pos[4][2]={0,1,1,0,0,-1,-1,0};//方向偏移量
void dfs(int x,int y){
    if(sx==ex&&sy==ey){
        flag=1;
        return;
    }
    for(int i=0;i<4;i++){
        int tx=x+pos[i][0];
        int ty=y+pos[i][1];
        if(1<=tx&&tx<=n&&1<=ty&&ty<=n&&book[tx][ty]!=1&&!p[tx][ty]){
            p[tx][ty]=1;
            dfs(tx,ty);
            p[tx][ty]=0;
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){//建立矩阵地图
        for(int j=1;j<=n;j++)
            cin>>book[i][j];
    }
    if(book[1][1]==1)//入口被山堵住
    cout<<"NO";
    return 0;

    book[1][1]=1;//标记已走过
    dfs(1,1);
    if(flag)cout<<"YES";
    else cout<<"NO";
}
