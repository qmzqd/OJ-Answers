#include<bits/stdc++.h>
using namespace std;
string a1,b1,c1;
int a[205],b[205],c[205],ans[405];
int main()
{
	cin>>a1>>b1>>c1;
	int lena=a1.length(),lenb=b1.length(),lenc=c1.length();
	for(int i=0;i<lena;i++)a[i]=a1[lena-i-1]-48;
	for(int i=0;i<lenb;i++)b[i]=b1[lenb-i-1]-48;
	for(int i=0;i<lenc;i++)c[i]=c1[lenc-i-1]-48;
	int x=0,len=max(lena,lenb);
	for(int i=0;i<len;i++){
		b[i]=b[i]+a[i]+x;
		x=b[i]/10;
		b[i]%=10;
	}
	if(x)b[len++]=x;
	for(int i=0;i<len;i++){
		x=0;
		for(int j=0;j<lenc;j++){
			ans[i+j]+=b[i]*c[j]+x;
			x=ans[i+j]/10;
			ans[i+j]%=10;
		}
		ans[i+lenc]=x;
	}
	int l=len+lenc;
	while(ans[l]==0&&l>0)l--;
	for(int i=l;i>=0;i--)cout<<ans[i];
	return 0;
}