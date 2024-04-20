#include <bits/stdc++.h>
using namespace std;
int n,m,mp[105][105],book[105][105];
struct node{
    int x,y,step;
};
queue<node> q;
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
void bfs(){
    node a={1,1,0};book[1][1]=1;q.push(a);
    while(!q.empty()){
        node f = q.front();q.pop();
        if(mp[f.x][f.y]==2){
            cout<<f.step;return;
        }
        for(int i=0;i<4;i++){
            int nx=f.x+dx[i],ny=f.y+dy[i];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&mp[nx][ny]==0&&book[nx][ny]==0){
                node t={nx,ny,f.step+1};q.push(t);
                book[nx][ny]=1;
            }
        }
    }
}
int main(){
   cin>>n;
   return 0;
}