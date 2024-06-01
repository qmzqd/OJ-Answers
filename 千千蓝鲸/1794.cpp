#include <iostream>
using namespace std;
int n,a[1005][1005],f[1005][1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++){
			f[i][j]=max(f[i-1][j],f[i-1][j-1])+a[i][j];
		}
	int ans=-1;
	for(int i=1;i<=n;i++)ans=max(ans,f[n][i]);
	cout<<ans;
	return 0;
} 
