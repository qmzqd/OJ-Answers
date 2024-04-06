#include<bits/stdc++.h>
using namespace std;
int n,a[105],len,cnt;
string m;
bool hui(){
    for(int i=0;i<len;i++){
        if(a[i]!=a[len-i-1]){

        }
    }
};
int main(){
    cin>>n>>m;
    len=m.length();
    for(int i=0;i<len;i++){
        if(m[i]>='0'&&m[i<='9'])a[i]=m[len-i-1]-'0';
        else a[i]=m[len-i-1]-'A'+10;
    }
    while(cnt<=30){
        if(hui()){
            cout<<cnt;
            return 0;
        }
        else{
            cnt++;
            add();
        }
    }
    return 0;
}