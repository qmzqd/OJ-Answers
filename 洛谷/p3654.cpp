#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[105][105];
long long sum;
bool f1(int x,int y){
    if(y-k-1>m)return 0;
    for(int i=y;i<y+k;i++){
        if(a[x][i])return 0;
    }
    return 1;
}
bool f2(int x,int y){
    if(x-k-1>n)return 0;
    for(int i=x;i<x+k;i++){
        if(a[y][i])return 0;
    }
    return 1;
}
int main(){
    cin>>n>>m>>k;
    char c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>c;
            if(c=='#')a[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(f1(i,j))sum++;
            if(f2(i,j))sum++;

        }
    }
    if(k==1)sum/=2;
    cout<<sum;
    return 0;
}