#include<bits/stdc++.h>
using namespace std;
inline int mymax(int x,int y){return x>y?x:y;}
inline int read()
{
	char c=getchar();
	int x=0,f=1;
	while(c<48 || c>57)
	{
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>=48 && c<=57)
	{
		x=x*10+c-48;
		c=getchar();
	}
	return x*f;
}
struct node
{
	int x,y;
}a[1110000];
int cmp(node n1,node n2)
{
	return n1.y>n2.y;
}
int fa[710000];
int find(int x)
{
	if(fa[x]==x) return x;
	else return fa[x]=find(fa[x]);
}
int main()
{
	int n; n=read(); 
	int ans=0;
	int maxx=0;
	for(int i=1;i<=n;i++)
	{
		a[i].x=read();
		a[i].y=read();
		maxx=max(maxx,a[i].x);
	}
	for(int i=1;i<=maxx;i++) fa[i]=i;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		int fx=find(a[i].x);
		if(fx!=0)
		{
			ans+=a[i].y;
			fa[fx]=fx-1;
		}
	}
	printf("%d\n",ans);
	return 0;
}