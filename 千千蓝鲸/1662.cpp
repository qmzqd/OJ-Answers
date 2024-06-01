#include <iostream>
using namespace std;
int n,a[105],f1[105],f2[105];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f1[i]=f2[i]=1;
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i-1;j++)
			if(a[j]<a[i])f1[i]=max(f1[i],f1[j]+1);
	for(int i=n;i>0;i--)
		for(int j=i+1;j<=n;j++)
			if(a[j]<a[i])f2[i]=max(f2[i],f2[j]+1);
	int ans=-1;
	for(int i=1;i<=n;i++)ans=max(ans,f1[i]+f2[i]-1);
	cout<<n-ans;
	return 0;
}
