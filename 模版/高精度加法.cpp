#include<bits/stdc++.h>  
using namespace std;  
/*
高精度数   大数  
*/
string a1,b1;  
int a[114514],b[114514],c[114514];  
  
int main(){  
    cin>>a1>>b1;  
    int lena=a1.length();  
    int lenb=b1.length();  
    for(int i=0;i<lena;i++){  
        a[i]=a1[lena-i-1]-'0';  
    }  
    for(int i=0;i<lenb;i++){  
        b[i]=b1[lenb-i-1]-'0';  
    }  
    int len=lena>lenb?lena:lenb;  
    for(int i=0;i<len;i++){  
        c[i]=a[i]+b[i];  
        if(c[i]>10){  
            c[i+1]++;  
            c[i]%=10;  
        }  
    }  
    if(c[len]==0){  
        len--;  
    }  
    for(int i=len;i>=0;i--){  
        cout<<c[i];  
    }  
    cout<<endl;  
    return 0;  
}