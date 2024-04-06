#include<bits/stdc++.h>  
using namespace std;  


/*
高精度数   大数     
1.判断谁更大
字符串特点；比较大小是比较字典序
*/
string a1,b1;  
int a[101],b[101],c[105];
int main(){
    cin>>a1>>b1;
    int lena=a1.length(),lenb=b1.length();
    for(int i=0;i<lena;i++)a[i]=a1[lena-i-1]-48;
    for(int i=0;i<lenb;i++)b[i]=b1[lenb-i-1]-48;
    int x=0;
    int len=max(lena,lenb);
    for(int i=0;i<len;i++)
    {
        c[i]=a[i]+b[i]+x;
        x=c[i]/10;
        c[i]%=10;
    }
    if(x)c[len]=x;
    for(int i=len-1;i>=0;i--){
        cout<<c[i];
    }
    return 0;  
}