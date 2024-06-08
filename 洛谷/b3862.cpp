#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int n,m,book[N],ans[N];
vector<int>a[N];
void dfs(int start,int now){
	if(a[now].empty())return;
	for(int i=0;i<a[now].size();i++){
		if(book[a[now][i]]==0){
			book[a[now][i]]=1;
			ans[start]=max(ans[start],a[now][i]);
			dfs(start,a[now][i]);
		}
	}
}
int main()
{
	cin>>n>>m;
	while(m--){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
	}
	for(int i=1;i<=n;i++)ans[i]=i;
	for(int i=1;i<=n;i++){
		memset(book,0,sizeof book);
		book[i]=1;
		dfs(i,i);
	}
	for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
	return 0;
}
