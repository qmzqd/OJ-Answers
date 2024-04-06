#include<bits/stdc++.h>
using namespace std;
struct pos{
    int x,y,step;//x y位置  step步数
}q[10005];
//queue<pos> q;//创建pos结构类型 队列q
int n,m,x,y,p[105][105],book[105][105],head,tail;
int pos[4][2]={0,1,1,0,0,-1,-1,0};
void bfs(){
    book[x][y]=1;
    q[tail].x=x;//起始点数据  入队
    q[tail].y=y;
    q[tail++].step=0;//步数
    while(head<tail){
        for(int i=0;i<4;i++){
            int tx=q[head].x+pos[i][0];
            int ty=q[head].y+pos[i][1];
            if(1<=tx&&tx<=n&&1<=ty&&ty<=m&&!book[tx][ty]&&p[tx][ty]){
                book[tx][ty]=1;
                q[tail].x=tx,q[tail].y=ty;
                q[tail++].step=q[head].step+1;
                p[tx][ty]=q[tail].step;
            }
        }
        head++;//对首 出队
    }
}
int main(){
    cin>>n>>m>>x>>y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>p[i][j];
        }
    }
    bfs();//广搜
    cout<<tail;
    return 0;
}

