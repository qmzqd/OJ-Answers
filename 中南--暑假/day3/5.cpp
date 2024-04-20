#include <bits/stdc++.h>
using namespace std;
string n,m;
string nb(string a1,string b1)
{
    int a[200]={},b[200]={},c[500]={},lena=a1.length(),lenb=b1.length(),lenc,i,j,x;
    string result;
    for(i=0;i<=lena-1;i++) a[lena-i]=a1[i]-'0';
    for(i=0;i<=lenb-1;i++) b[lenb-i]=b1[i]-'0';
    for(i=1;i<=lena;i++)
    {
        x=0;
        for(j=1;j<=lenb;j++)
        {
            c[i+j-1]=a[i]*b[j]+x+c[i+j-1];
            x=c[i+j-1]/10;
            c[i+j-1]%=10;
        }
        c[i+lenb]=x;
    }
	lenc=lena+lenb;
	while(c[lenc]==0&&lenc>1)
        lenc--;
    for(i=lenc;i>=1;i--)
        result+=c[i]+'0';
    return result;
}
int main(){
    cin>>n>>m;
    cout<<nb(n,m);
}