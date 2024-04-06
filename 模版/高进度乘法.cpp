#include <iostream>
#include <cstring>
using namespace std;
#define max 1000000
char a[max],b[max];
int A[max],B[max],C[2*max],temp,lena,lenb,lenc;
bool flag1=true,flag2=true;
int main(){
	cin>>a;
	cin>>b;
	lena=strlen(a);
	lenb=strlen(b);
	lenc=lena+lenb;
	if(a[0]=='-')
	{
		strcpy(a,&a[1]);
		flag1=false ;
	}
	if(b[0]=='-')
	{
		strcpy(b,&b[1]);
		flag2=false ;
	}
	if(flag1==true&&flag2==false||flag1==false&&flag2==true)
	cout<<"-";
	for(int i=0;i<lena;++i)
	A[i]=a[lena-1-i]-'0';
	for(int i=0;i<lenb;++i)
	B[i]=b[lenb-1-i]-'0';
	for(int i=0;i<lena;++i)
		{
			temp=0;
			for(int j=0;j<lenb;++j) 
			{
				C[i+j]=A[i]*B[j]+temp+C[i+j];
				temp=C[i+j]/10;
				C[i+j]%=10;
			}
			C[i+lenb]=temp;
		}
	for(int i=lenc-1;i>=0;--i)
	{
		if(C[i]==0&&lenc>1)
		{
			lenc--;
		}
		else {
			break;
		}
	}
	for (int i=lenc-1; i>=0; i--) 
	{
    	cout<<C[i];
    }
    return 0;
		
		
	
	

	
}
