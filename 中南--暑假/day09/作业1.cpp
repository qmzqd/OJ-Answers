#include<bits/stdc++.h>
using namespace std;
int r,c,k;
long long ans;
char p[105][105];
int find(int x,int y){
    if(k==1) return 0;
    int cnt=0,flag=1;
    //向右查找 长度为k
    flag=1;
    for(int i=1;i<k;i++){
        if(p[x][y+i]!='.')
            flag=0;
            break;
        }
    cnt+=flag;
    flag=1;
    for(int i=1;i<k;i++){
        if(p[x+i][y]!='.')
            flag=0;
            break;
        }
    cnt+=flag;
    return cnt;
}
int main(){
    cin>>r>>c>>k;//行 列 长度
    for(int i=0;i<r;i++)//建立矩阵地图
        for(int j=0;j<c;j++)
            cin>>p[i][j];
    for(int i=0;i<r;i++)//遍历矩阵地图
        for(int j=0;j<c;j++)
            if(p[i][j]=='.')//当前位置
                ans+=find(i,j);
    cout<<ans;
}