#include <bits/stdc++.h>
using namespace std;
deque<int> q;
int n,x;
string s;
int main(){
    cin>>n;
    while(n--){
        cin>>x;
        cin>>s;
        if(x==0) q.push_front(s);
        else q.push_back(s);
    }
    while(!q.empty()){
        cout<<q.front()<<endl;//输出队首
        q.pop_front();//删除队首
    }
    return 0;
}
