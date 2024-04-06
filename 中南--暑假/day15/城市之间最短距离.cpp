#include<bits/stdc++.h>
using namespace std;
struct stu{
    int num,pre;        
}q[25];
int n,m,p[25][25],book[25],head,tail,flag;
void print(int x){
    if(x==n)
        cout<<q[x].num; 
    else{
        print(q[x].pre);
        cout<<
    }
}
void bfs(){
    book[n]=1;//标记
    q[tail++].num=n;
    while(head<tail){
        for(int i=1;i<=n;i++){//所有节点
            if(p[q[head].num][i]==1){//连通
                q[tail].num=i;
            }
        }
        for(int i=1;i<=n;i++){
            if(q[tail-1].num==1){
                print();
                flag=1;
            }
        }
    }
}
int main(){
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        p[x][y]=1;
        p[y][x]=1;
    }
    return 0;
}