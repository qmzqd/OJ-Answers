#include <iostream>
using namespace std;
int n,a[105][105],f[105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=n-1;i++)f[i]=0x3fffffff;
	for(int i=n-1;i>=1;i--){
		for(int j=i+1;j<=n;j++){
			if(a[i][j])f[i]=min(f[i],a[i][j]+f[j]);
		}
	}
	cout<<f[1];
	return 0;
} 
