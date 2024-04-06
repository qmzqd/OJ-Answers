#include<bits/stdc++.h>
using namespace std;
int n,ans,p[15],book[15],a[30],b[30];
void dfs(int i){//第i颗棋子
    if(i>n){
        ans++;
        if(ans<=3){
            for(int j=1;j<=n;j++) cout<<p[j]<<" ";
            cout<<endl;
        }
        return;
    }
    for(int j=1;j<=n;j++){
    //列未冲突且左右对角线未冲突
        if(!book[j]&&!a[i-j+n]&&!b[i+j]){
            p[i]=j;//将第i颗落子坐在i行j列
            book[j]=1;//标记列
            a[i-j+n]=1;//左对角线标记
            b[i+j]=1;//右对角线标记
            dfs(i+1);//递归继续下棋

            book[j]=0;//回溯 重置
            a[i-j+n]=0;
            b[i+j]=0;
        }
    }
}
int main(){
    cin>>n;
    dfs(1);
    cout<<ans<<endl;
    return 0; 
}
