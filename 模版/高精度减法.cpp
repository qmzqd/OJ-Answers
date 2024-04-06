#include<bits/stdc++.h>  
using namespace std;  
string a1,b1;  
int a[101],b[101],c[105];  
int main(){  
    cin>>a1>>b1;  
    int lena=a1.length(),lenb=b1.length();  
    if(lena<lenb||lena==lenb&&a1<b1){  
        cout<<"-";  
        swap(a1,b1);  
    }  
    lena=a1.length(),lenb=b1.length();  
    for(int i=0;i<lena;i++)a[i]=a1[lena-i-1]-48;  
    for(int i=0;i<lenb;i++)b[i]=b1[lenb-i-1]-48;  
    int x=0;//错位  

    for(int i=0;i<lena;i++){  
        c[i]=a[i]-b[i]-x;  
        if(c[i]<0){  
            x=1;  
            c[i]+=10;  
        }  
        else x=0;  
    }  
	if(x)c[lena++]=x;
    while(c[lena]==0&&lena>0) lena--;  
    for(int i=lena;i>=0;i--)cout<<c[i];  
    return 0;  
}