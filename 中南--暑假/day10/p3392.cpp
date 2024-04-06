#include <bits/stdc++.h>
using namespace std;
struct stu{
    int w,b,r;
}p[55];
int n,m,minn=1e4;
char ch;
int main(){
   cin>>n>>m;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
        cin>>ch;
        if(ch=='W') p[i].w++;
        if(ch=='B') p[i].b++;
        if(ch=='R') p[i].r++;
       }
//枚举
    for(int i=2;i<n;i++){//第一根分割线I
        int cnt=0;
        for(int j=i+1;j<=n;j++){
            for(int x=1;x<i;x++) cnt+=p[x].b+p[x].r;
            for(int y=1;y<i;y++) cnt+=p[y].w+p[y].r;
            for(int z=1;z<i;z++) cnt+=p[z].b+p[z].b;
        }

   }//第二根分割线J
   cout<<minn;
}
}