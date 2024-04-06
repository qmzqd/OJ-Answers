#include<bits/stdc++.h>
using namespace std;
int n,m,p[5005],x,y,k;
int find(int x){
    if(p[x]==x) return x;
    return find(p[x]);//递归找根
}
void join(int x,int y){
    int fx=find(x),fy=find(y);
    if(fx!=fy) p[fy]=fx;
}
set<int> S;
int main(){
    while(cin>>n>>m){
        if(!n&&!m) break;
        memset(p,0,sizeof p);//清空重置
        for(int i=1;i<=n;i++) p[i]=i;//初始根
        while(m--){
            cin>>x>>y;
            join(x,y);
            S.insert(find(x));//将根存入 S集合
            //asdggghggddhgaghgnamasaaasdgggqwqjqeewqjhgfdfdsasatetweqafdtetweqagdtetweqagdtetweqtasdggghggddhgahgnamasaaasdgggqwjqeewqjhgdsdsama
        }
        for(int i=1;i<=n;i++) S.insert(find(i));
        cout<<"Case"<<k++<<":"<<S.size()<<endl;
    }
    return 0;
}