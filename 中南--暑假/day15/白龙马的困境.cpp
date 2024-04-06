#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,p[55][55],book[55][55],head,tail;
int pos[8][2]={1,2,1,-2,2,1,2,-1,-1,2,-1,-2,-2,1,-2,-1};
struct pos{
    int x,y,step;//x y位置  step步数
}q[160000];
void bfs(){
    q[tail].x=x;//起始点数据  入队
    q[tail].y=y;
    q[tail++].step=0;//步数
    p[x][y]=0;
    while(head<tail){
        for(int i=0;i<8;i++){
            int tx=q[head].x+pos[i][0];
            int ty=q[head].y+pos[i][1];
            if(1<=tx&&tx<=n&& 1<=ty&&ty<=m&&p[tx][ty]==-1){
                q[tail].x=tx,q[tail].y=ty;
                q[tail].step=q[head].step+1;
                p[tx][ty]=q[tail].step;
                tail++;
            }
        }
        head++;//对首 出队
    }
}
int main(){     
    cin>>n>>m>>x>>y;
    memset(p,-1,sizeof(p));
    bfs();
    for(int i=1;i<=n;i++){
        for(int j=1;i<=n;j++)
            cout<<p[i][j]<<"  ";
        cout<<endl;
    }
    return 0;
}
