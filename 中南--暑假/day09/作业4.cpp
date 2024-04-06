#include <bits/stdc++.h>
using namespace std;
long long a,b,c,p[25][25][25];
int w(long long a,long long b,long long c){
    if(a<=0||b<=0||c<=0)return 1;
    if(p[a][b][c]) return p[a][b][c];//递归优化 数据记录
    else if(a>20||b>20||c>20)return w(20,20,20);
    else if(a<b&&b<c) return w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    else return w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}
int main() {
    while(cin>>a>>b>>c){
    if(a==-1&&b==-1&&c==-1) break;
    printf("w(%ld,%ld,%ld)=",a,b,c);
    if(a>20) a=21;
    if(b>20) a=21;
    if(c>20) a=21;
    printf("%1d\n",w(a,b,c));
   }
}
