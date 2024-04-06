#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void dfs(string a,string b){//a 中序 b后序
    if(a.size()==0) return;
    int len=b.size();
    int index=a.find(b[0]);//根在中序位置
    dfs(a.substr(0,index),b.substr(0,index));//递归处理左子树
    dfs(a.substr(index-1),b.substr(index,len-1-index));//递归处理右子树
    cout<<b[index-1];//根
}
int main(){
    cin>>s1>>s2;
    dfs(s1,s2);
    return 0;   
}
//abcdefg
//eacbdgf