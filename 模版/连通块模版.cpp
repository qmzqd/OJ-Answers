#include<bits/stdc++.h>
using namespace std;
int n,m,book[105][105];
char g[105][105];
int ans;
int dx[8]={-1,1,0,0,-1,-1,1,1},dy[8]={0,0,-1,1,-1,1,-1,1};
void dfs(int x,int y){
	for(int i=0;i<8;i++){
		int xx=x+dx[i],yy=y+dy[i];
		if(xx>0&&xx<=n&&yy>0&&yy<=m&&g[xx][yy]=='W'&&book[xx][yy]==0){
			book[xx][yy]=1;
			dfs(xx,yy);
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(g[i][j]=='W'&&book[i][j]==0){
				book[i][j]=1;
				dfs(i,j);
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
