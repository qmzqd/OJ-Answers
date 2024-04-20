#include <bits/stdc++.h>
using namespace std;
struct node{
      node data;
   };
void bfs(){
    queue<node> q;
    q.push(node());
    while(!q.empty()){
        node n = q.front();
        q.pop();
        cout<<n.data<<" ";
    }
    cout<<endl;
}
int main()
{
   
   return 0;
}
