#include <iostream>
using namespace std;
string a,b,c;
int A[1000],B[1000],C[1000],D[1000],E[1000];
int main(){
	cin>>a>>b>>c;
	int lena=a.size();
	int lenb=b.size();
	int lend=c.size();
	for(int i=0;i<lena;i++)A[i]=a[lena-1-i]-'0';
	for(int i=0;i<lenb;i++)B[i]=b[lenb-1-i]-'0';
	for(int i=0;i<lend;i++)D[i]=c[lend-1-i]-'0';
	int lenc=max(lena,lenb);
	//高精度加法 A+B->C 
	int x=0;
	for(int i=0;i<lenc;i++){
		C[i]=A[i]+B[i]+x;
		x=C[i]/10;
		C[i]%=10;
	}
	if(x)C[lenc++]=x;
	/*
	for(int i=lenc-1;i>=0;i--)cout<<C[i];
	cout<<endl;
	*/
	//高精度乘法 C*D->E
	for(int i=0;i<lenc;i++){
		int x=0;
		for(int j=0;j<lend;j++){
			E[i+j]=E[i+j]+C[i]*D[j]+x;
			x=E[i+j]/10;
			E[i+j]%=10;
		}
		E[i+lend]=x;
	}
	int lene=lenc+lend;
	while(E[lene-1]==0&&lene-1>0)lene--;
	for(int i=lene-1;i>=0;i--)cout<<E[i];
	return 0;
} 
