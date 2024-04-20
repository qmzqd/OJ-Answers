#include<bits/stdc++.h>
using namespace std;
stack<int> a;
int n,qwer;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>qwer;
        a.push(qwer);
    }
    for(int i=1;i<=n;i++){
        cout<<a.top()<<" ";
        a.pop();
    }
    return 0;
}