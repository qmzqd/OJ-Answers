#include<bits/stdc++.h>
using namespace std;
int n,p[1005][1005],book[1005][1005];
int dfs(int i,int j){
    if(i==n){
        return p[i][j];
    }
    return p[i][j]+=max(p[i+1][j],p[i+1][j+1]);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>p[i][j];
    for(int i=n;i>0;i--)
        for(int j=1;j<=i;j++)
            book[i][j]=p[i][j]+max(book[i+1][j],book[i+1][j+1]);
}
