#include <iostream>
#include <algorithm>
using namespace std;
int n,l,sum;
struct stu{
	int k,v,m;
}a[1005];
bool cmp(stu x,stu y){
	return x.v>y.v;
} 
int main(){
	cin>>n>>l;
	for(int i=1;i<=n;i++){
		cin>>a[i].m>>a[i].k;
		a[i].v=a[i].m/a[i].k;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		if(l>=a[i].k){
			sum+=a[i].m;
			l-=a[i].k;
		}else{
			sum+=l*a[i].v;
			break;
		}
	}
	cout<<sum;
	return 0;
}
