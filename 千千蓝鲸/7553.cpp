#include<bits/stdc++.h>
using namespace std;
int a,b;
const int N=1e5+5;
int prime[N],on[N],cnt=1;
bool f(int x){
	while(x){
		if(on[x]==1)return 0;
		x/=10;
	}
	return 1;
}
int main()
{
	for(int i=2;i<=N;i++){
		if(!on[i])prime[cnt++]=i;
		for(int j=1;j<=cnt&&i*prime[j]<=N;j++){
			on[i*prime[j]]=1;
			if(i%prime[j]==0)break;
		}
	}
	cin>>a>>b;
	bool flag=1;
	for(int i=a;i<b;i++){
		if(f(i)){
			flag=0;
			cout<<i<<endl;
		}
	}
	if(flag)cout<<-1;
	return 0;
}