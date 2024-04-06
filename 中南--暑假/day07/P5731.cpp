#include <iostream>
using namespace std;
int n,d=0,x=1,y=1,p[15][15];
int pos[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
//下标           0      1      2      3
int main() {
    cin>>n;
    for(int i=1;i<=n*n;i++){
        p[x][y]=i;//补充值
        int tx=x+pos[d][0];
        int ty=y+pos[d][1];
        //行未越界 且 列未越界 且 未走过
        if(1<=tx&&tx<=n&&1<=ty&&ty<=n&&!p[tx][ty]){
            x=tx;   //更新位置
            y=ty;   
        }else{//不能走
            d=(d+1)%4;//调转方向
            x=x+pos[d][0];
            y=y+pos[d][1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(p[i][j]<10) cout<<" ";//补空格
            cout<<" "<<p[i][j];
        }
        cout<<endl;
    }
    return 0;
}