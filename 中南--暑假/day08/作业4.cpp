#include<iostream>
using namespace std;
int n,m;
const int pos[8][2]={-1,-1, -1,0, -1,1,
                0,-1,        0,1,
                1,-1,  1,0,  1,1
   };
char book[105][105];
int find(int x,int y){
    int cnt=0;
    for(int i=0;i<8;i++){
        if(book[x+pos[i][0]][y+pos[i][1]]=='*') cnt++;
    }
    return cnt;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){//建立矩阵地图
        for(int j=1;j<=m;j++)
            cin>>book[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){//遍历矩阵地图
            if(book[i][j]=='*') cout<<'*';
            else cout<<find(i,j);
        }
        cout<<endl;
    }
    return 0;
}
}