#include<bits/stdc++.h>
using namespace std;
string s;
int k,L,R;
char find(int l,int r){
    char ch='9';
    for(int i=l;i<=r;i++){
        if(ch>s[i]){
            ch=s[i];
            L=i+1;
        }  
    }
    return ch;
}
int main(){
    cin>>s>>k;
    int len=s.size(),flag=1;
    L=0;R=k,flag=1;
    for(int i=1;i<=len-k;i++){//len-k长度
        char num= find(L,R);
        if(num=='0'&flag){//去除前导0
        }else{
            cout<<num;
            flag=0;
        }
        R++;
    }
    if(flag) cout<<0;
    return 0;
}