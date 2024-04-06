#include<bits/stdc++.h>
using namespace std;
stack<int> s,q;
int main(){
//  for(int i=1;i<=5;i++)
//      s.push(i);
//  cout<<s.size();
//  s.pop();
//  s.pop();
//  cout<<s.top()<<endl;
//  while(!s.empty()){//栈不为空
//      cout<<s.top()<<endl;//输出栈顶元素
//      s.pop();//删除栈顶元素
//  }
//  return 0;
//
//stack<int> ???;创建一个空栈
//s.empty()判断栈是否为空
//s.size()返回s栈中的个数，即栈的长度
//s.top()获取栈顶元素的值
//s.push(x)插入x为新的栈顶元素
//s.pop()删除s栈顶元素
//x.front()获取队首元素的值
//x.back()
 for (int i = 1; i <= 10; i++)
        q.push(i);
    cout << q.front() << endl;
    cout << q.back() << endl;
    while (!q.empty()) {
        cout << q.front();
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return 0;
}