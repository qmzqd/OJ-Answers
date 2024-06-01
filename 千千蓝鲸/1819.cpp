#include <iostream>
using namespace std;
int k,n,a[10005],f1[10005],f2[10005];
int main(){
	cin>>k;
	while(k--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			f1[i]=1;
			f2[i]=1;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i-1;j++){
				if(a[j]>a[i])f1[i]=max(f1[i],f1[j]+1);
				if(a[j]<a[i])f2[i]=max(f2[i],f2[j]+1);
			}
		}
		int ans=-1;
		for(int i=1;i<=n;i++)ans=max(ans,f1[i]);
		for(int i=1;i<=n;i++)ans=max(ans,f2[i]);
		cout<<ans<<endl;
	}
	return 0;
} 
