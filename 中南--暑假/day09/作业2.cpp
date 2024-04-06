#include <bits/stdc++.h>
using namespace std;
int n,p[15],book[15];
void dfs(int k){
    if(k>n){
        for(int i=1;i<=n;i++) cout<<setw(5)<<p[i];
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!book[i]){//i未被使用
            p[k]=i;//存储i
            book[i]=1;//标记
            dfs(k+1);//继续递归
            book[i]=0;//回溯清空
        }
    }
}
int main() {
    cin>>n;
    dfs(1);
    return 0;
}
