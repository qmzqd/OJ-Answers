#include <iostream>
using namespace std;
int n,cnt,p[15],book[15],a[15],b[15];//p 棋子位置 book 列 a b坐标
void dfs(int i){ //第 i 颗棋子
    if(i>n){//棋子下完了
        cnt++;//计数器 +1
        if(cnt<=3){//前3次
            for(int i=1;i<=n;i++)
                cout<<p[i]<<" ";
            cout<<endl;
        } 
        return;
    }
    for(int j=1;j<=n;j++){//遍历 列
//列不冲突 且
        if(!book[j]&&!a[i-j+n]&&b[i+j]){
            p[i]=j;//当前落子
            book[j]=1;//列标记
            a[i-j+n]=1;//对角线标记
            b[i+j]=1;
            dfs(i+1);//继续下棋
            book[j]=0;//回溯
            a[i-j+n]=0;
            b[i+j]=0;
        }
    }    
}
int main(){
    cin>>n;
    dfs(1);
    cout<<cnt<<endl;
    return 0;
}