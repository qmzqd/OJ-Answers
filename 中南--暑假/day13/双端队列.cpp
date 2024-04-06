#include<bits/stdc++.h>
using namespace std;
deque<int> q;
int main(){
    for(int i=1;i<=5;i++) q.push_front(i);
    for(int i=6;i<=10;i++) q.push_front(i);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    
    q.pop_front();//队首删除
    q.pop_back();//队尾删除
    cout<<q.size()<<endl;//8
    
}