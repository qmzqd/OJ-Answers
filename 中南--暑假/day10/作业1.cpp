#include<bits/stdc++.h>
using namespace std;
long long n,p[25][25];
int dfs(int n,int k){
    if(n==0) return 1;
    if(p[n][k]) return p[n][k];
    if(k>0)//栈不为空
    //入栈操作+出栈
        return p[n][k]=dfs(n-1,k+1)+dfs(n,k-1);
    else
        return p[n][k]=dfs(n-1,k+1);
}
int main(){
    cin>>n;
    cout<<dfs(n,0);//n栈外  0栈内
    return 0;
} 