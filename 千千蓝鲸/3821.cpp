#include <iostream>
using namespace std;
int n,m,ans;
int main(){
	cin>>m>>n;
	if(m==2){
		int k=1;
		while(n){
			if(n%2)ans+=k;
			k*=2;
			n/=10;
		}
		cout<<ans;
		return 0;
	}else{
		int a[15]={},cnt=0;
		while(n){
			if(n%2)a[cnt]=1;
			cnt++;
			n/=2;
		}
		for(int i=cnt-1;i>=0;i--)cout<<a[i];
	}
	return 0;
} 
