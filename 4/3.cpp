#include<bits/stdc++.h>
using namespace std;
int n,out;
int yinjianbaole()
{
    char a1[100],b1[100];
    int a[100],b[100],c[100],lena,lenb,lenc,i,j,x;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    gets(a1);gets(b1);
    lena=strlen(a1);lenb=strlen(b1);
    for (i=0;i<=lena-1;i++) a[lena-i]=a1[i]-48;
    for (i=0;i<=lenb-1;i++) b[lenb-i]=b1[i]-48;
  	for (i=1;i<=lena;i++)
	{
	     x=0;                                             
	     for (j=1;j<=lenb;j++)                   
	     {
		   c[i+j-1]=a[i]*b[j]+x+c[i+j-1];
		   c[i+j-1] %= 10;
	     }
	     c[i+lenb]=x;                              
	}
	lenc=lena+lenb;
	while (c[lenc]==0&&lenc>1)   
		lenc--;
	for (i=lenc;i>=1;i--)
		out=c[i];
	return 0;
}
int main(){
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<out;
        }
    }
    return 0;
}