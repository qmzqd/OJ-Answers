#include <iostream>
#include <queue>
using namespace std;
int mp[105][105],book[105][105],n,m;
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
struct node{
	int x,y;
};
queue<node>q;
void bfs(){
	node a={1,1};
	q.push(a);
	book[1][1]=1;
	while(!q.empty()){
		node f=q.front();
		if(mp[f.x][f.y]==2){
			cout<<"YES";
			return;
		}for(int i=0;i<4;i++){
			int nx=f.x+dx[i],ny=f.y+dy[i];
			node k={nx,ny};
			if(nx>0&&nx<=n&&ny>0&&ny<=m&&mp[nx][ny]!=1&&book[nx][ny]==0){
				book[nx][ny]=1;
				q.push(k);
			}
		}
		q.pop();
	}
	cout<<"NO";
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			if(c=='*')mp[i][j]=2;
			if(c=='#')mp[i][j]=1;
		}
	if(mp[1][1]==1){
		cout<<"NO";
		return 0;
	}
	bfs();
	return 0;
}
